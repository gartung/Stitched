/**
 * StreamTranslator.cc
 *
 * Utility class for translating framework objects (e.g. ProductRegistry and
 * EventPrincipal) into streamer message objects and vice versa.
 * The "serialize" methods convert framework objects into messages, and
 * the "deserialize" methods convert messages into framework objects.
 */

#include "IOPool/Streamer/interface/StreamTranslator.h"
#include "IOPool/Streamer/interface/ClassFiller.h"
#include "IOPool/Streamer/interface/EventStreamOutput.h"
#include "FWCore/Framework/interface/Event.h"

#include "zlib.h"

using namespace std;

namespace edm
{

  /**
   * Creates a translator instance for the specified product registry.
   */
  StreamTranslator::StreamTranslator(edm::OutputModule::Selections const* selections):
    selections_(selections)
  { }

  /**
   * Serializes the product registry (that was specified to the constructor)
   * into the specified InitMessage.
   */
  int StreamTranslator::serializeRegistry(InitMsgBuilder& initMessage)
  {
    FDEBUG(6) << "StreamTranslator::serializeRegistry" << endl;
    TClass* prog_reg = getTClass(typeid(SendJobHeader));
    SendJobHeader sd;

    edm::OutputModule::Selections::const_iterator i(selections_->begin()),e(selections_->end());

    FDEBUG(9) << "Product List: " << endl;

    for(;i!=e;++i)  
      {
        sd.descs_.push_back(**i);
        FDEBUG(9) << "StreamOutput got product = " << (*i)->className()
                  << endl;
      }

    TBuffer rootbuf(TBuffer::kWrite,initMessage.bufferSize(),
                    initMessage.dataAddress(),kFALSE);

    RootDebug tracer(10,10);

    int bres = rootbuf.WriteObjectAny((char*)&sd,prog_reg);

    switch(bres)
      {
      case 0: // failure
        {
          throw cms::Exception("StreamTranslation","Registry serialization failed")
            << "StreamTranslator failed to serialize registry\n";
          break;
        }
      case 1: // succcess
        break;
      case 2: // truncated result
        {
          throw cms::Exception("StreamTranslation","Registry serialization truncated")
            << "StreamTranslator module attempted to serialize\n"
            << "a registry that is to big for the allocated buffers\n";
          break;
        }
      default: // unknown
        {
          throw cms::Exception("StreamTranslation","Registry serialization failed")
            << "StreamTranslator module got an unknown error code\n"
            << " while attempting to serialize registry\n";
          break;
        }
      }

    initMessage.setDescLength(rootbuf.Length());
    return rootbuf.Length();
  }

  /**
   * Serializes the specified event into the specified event message.
   */
  int StreamTranslator::serializeEvent(EventPrincipal const& eventPrincipal,
                                       EventMsgBuilder& eventMessage,
                                       bool use_compression, int compression_level)
  {
    SendEvent se(eventPrincipal.id(),eventPrincipal.time());

    edm::OutputModule::Selections::const_iterator i(selections_->begin()),ie(selections_->end());
    // Loop over EDProducts, fill the provenance, and write.

    for(; i != ie; ++i) {
      BranchDescription const& desc = **i;
      ProductID const& id = desc.productID();

      if (id == ProductID()) {
        throw edm::Exception(edm::errors::ProductNotFound,"InvalidID")
          << "StreamTranslator::serializeEvent: invalid ProductID supplied in productRegistry\n";
      }
      EventPrincipal::SharedGroupPtr const group = eventPrincipal.getGroup(id);
      if (group.get() == 0) {
        std::string const& name = desc.className();
        std::string const className = wrappedClassName(name);
        TClass *cp = gROOT->GetClass(className.c_str());
        if (cp == 0) {
          throw edm::Exception(errors::ProductNotFound,"NoMatch")
            << "TypeID::className: No dictionary for class " << className << '\n'
            << "Add an entry for this class\n"
            << "to the appropriate 'classes_def.xml' and 'classes.h' files." << '\n';
        }


        EDProduct *p = static_cast<EDProduct *>(cp->New());
        se.prods_.push_back(ProdPair(p, &group->provenance()));
      } else {
        se.prods_.push_back(ProdPair(group->product(), &group->provenance()));
      }
     }


    TBuffer rootbuf(TBuffer::kWrite,eventMessage.bufferSize(),
                    eventMessage.eventAddr(),kFALSE);
    RootDebug tracer(10,10);

    TClass* tc = getTClass(typeid(SendEvent));
    int bres = rootbuf.WriteObjectAny(&se,tc);
   switch(bres)
      {
      case 0: // failure
        {
          throw cms::Exception("StreamTranslation","Event serialization failed")
            << "StreamTranslator failed to serialize event: "
            << eventPrincipal.id();
          break;
        }
      case 1: // succcess
        break;
      case 2: // truncated result
        {
          throw cms::Exception("StreamTranslation","Event serialization truncated")
            << "StreamTranslator module attempted to serialize an event\n"
            << "that is to big for the allocated buffers: "
            << eventPrincipal.id();
          break;
        }
    default: // unknown
        {
          throw cms::Exception("StreamTranslation","Event serialization failed")
            << "StreamTranslator module got an unknown error code\n"
            << " while attempting to serialize event: "
            << eventPrincipal.id();
          break;
        }
      }
     
    eventMessage.setEventLength(rootbuf.Length()); 
    // compress before return if we need to
    // should test if compressed already - should never be?
    //   as double compression can have problems
    if(use_compression)
    {
      std::vector<unsigned char> dest;
      //unsigned long dest_size = 7008*1000; //(should be > rootbuf.Length()*1.001 + 12)
      unsigned long dest_size = (unsigned long)(double(rootbuf.Length())*1.002 + 1.0) + 12;
      FDEBUG(10) << "rootbuf size = " << rootbuf.Length() << " dest_size = "
           << dest_size << endl;
      dest.resize(dest_size);
      // compression 1-9, 6 is zlib default, 0 none
      int ret = compress2(&dest[0], &dest_size, (unsigned char*)eventMessage.eventAddr(),
                          rootbuf.Length(), compression_level); 
      if(ret == Z_OK) {
        // copy compressed data back into buffer and resize
        unsigned char* pos = (unsigned char*) eventMessage.eventAddr();
        unsigned char* from = (unsigned char*) &dest[0];
        unsigned int oldsize = rootbuf.Length();
        copy(from,from+dest_size,pos);
        eventMessage.setEventLength(dest_size);
        // and set reserved to original size for test and needed for buffer size
        eventMessage.setReserved(oldsize);
        // return the correct length
        FDEBUG(10) << " original size = " << oldsize << " final size = " << dest_size
             << " ratio = " << double(dest_size)/double(oldsize) << endl;
        return dest_size;
      }
      else
      {
        // compression failed, just return the original buffer
        FDEBUG(9) <<"Compression Return value: "<<ret<< " Okay = " << Z_OK << endl;
        // do we throw an exception here?
        cerr <<"Compression Return value: "<<ret<< " Okay = " << Z_OK << endl;
        return rootbuf.Length();
      }
    }
    else
    {
      // just return the original buffer
      return rootbuf.Length();
    }
  }

  /**
   * Deserializes the specified init message into a SendJobHeader object
   * (which is related to the product registry).
   */
  std::auto_ptr<SendJobHeader>
  StreamTranslator::deserializeRegistry(InitMsgView const& initView)
  {
    if(initView.code() != Header::INIT)
      throw cms::Exception("StreamTranslation","Registry deserialization error")
        << "received wrong message type: expected INIT, got "
        << initView.code() << "\n";

    TClass* desc = getTClass(typeid(SendJobHeader));

    TBuffer xbuf(TBuffer::kRead, initView.descLength(),
                 (char*)initView.descData(),kFALSE);
    RootDebug tracer(10,10);
    auto_ptr<SendJobHeader> sd((SendJobHeader*)xbuf.ReadObjectAny(desc));

    if(sd.get()==0) 
      {
        throw cms::Exception("StreamTranslation","Registry deserialization error")
          << "Could not read the initial product registry list\n";
      }

    return sd;  
  }

  /**
   * Deserializes the specified event message into an EventPrincipal object.
   */
  std::auto_ptr<EventPrincipal>
  StreamTranslator::deserializeEvent(EventMsgView const& eventView,
                                     const ProductRegistry& productRegistry)
  {
    if(eventView.code() != Header::EVENT)
      throw cms::Exception("StreamTranslation","Event deserialization error")
        << "received wrong message type: expected EVENT, got "
        << eventView.code() << "\n";
    FDEBUG(9) << "Decode event: "
         << eventView.event() << " "
         << eventView.run() << " "
         << eventView.size() << " "
         << eventView.eventLength() << " "
         << eventView.eventData()
         << endl;
    // uncompress if we need to
    // 78 was a dummy value (for no uncompressed) - should be 0 for uncompressed
    // need to get rid of this when 090 MTCC streamers are gotten rid of
    unsigned long origsize = eventView.reserved();
    ///unsigned char dest[7008*1000];
    std::vector<unsigned char> dest;
    unsigned long dest_size = 7008*1000; //(should be >= eventView.reserved() )
    if(eventView.reserved() != 78 && eventView.reserved() != 0)
    {
      dest_size = eventView.reserved();
      dest.resize(dest_size);
      int ret = uncompress(&dest[0], &dest_size, (unsigned char*)eventView.eventData(),
                          eventView.eventLength()); // do not need compression level
      //cout<<"unCompress Return value: "<<ret<< " Okay = " << Z_OK << endl;
      if(ret == Z_OK) {
        // check the length against original uncompressed length
        FDEBUG(10) << " original size = " << origsize << " final size = " 
                   << dest_size << endl;
        if(origsize != dest_size) {
          cerr << "deserializeEvent: Problem with uncompress, original size = "
               << origsize << " uncompress size = " << dest_size << endl;
          // we throw an error and return without event! null pointer
          throw cms::Exception("StreamTranslation","Deserialization error")
            << "mismatch event lengths should be" << origsize << " got "
            << dest_size << "\n";
          // do I need to return here?
          return (std::auto_ptr<edm::EventPrincipal>)NULL;
        }
      }
      else
      {
        // we throw an error and return without event! null pointer
        cerr << "deserializeEvent: Problem with uncompress, return value = "
             << ret << endl;
        throw cms::Exception("StreamTranslation","Deserialization error")
            << "Error code = " << ret << "\n ";
        // do I need to return here?
        return (std::auto_ptr<edm::EventPrincipal>)NULL;
      }
    }
    else // not compressed
    {
      // we need to copy anyway the buffer as we are using dest in xbuf
      dest_size = eventView.eventLength();
      dest.resize(dest_size);
      unsigned char* pos = (unsigned char*) &dest[0];
      unsigned char* from = (unsigned char*) eventView.eventData();
      copy(from,from+dest_size,pos);
    }
    TBuffer xbuf(TBuffer::kRead, dest_size,
                 (char*) &dest[0],kFALSE);
    //TBuffer xbuf(TBuffer::kRead, eventView.eventLength(),
    //             (char*) eventView.eventData(),kFALSE);
    RootDebug tracer(10,10);
    TClass* tc = getTClass(typeid(SendEvent));
    auto_ptr<SendEvent> sd((SendEvent*)xbuf.ReadObjectAny(tc));
    if(sd.get()==0)
      {
        throw cms::Exception("StreamTranslation","Event deserialization error")
          << "got a null event from input stream\n";
      }

    FDEBUG(5) << "Got event: " << sd->id_ << " " << sd->prods_.size() << endl;
    auto_ptr<EventPrincipal> ep(new EventPrincipal(sd->id_,
                                                   sd->time_,
                                                   productRegistry));
    // no process name list handling

    SendProds::iterator spi(sd->prods_.begin()),spe(sd->prods_.end());
    for(;spi!=spe;++spi)
      {
        FDEBUG(10) << "check prodpair" << endl;
        if(spi->prov()==0)
          throw cms::Exception("StreamTranslation","EmptyProvenance");
        if(spi->desc()==0)
          throw cms::Exception("StreamTranslation","EmptyDesc");
        FDEBUG(5) << "Prov:"
             << " " << spi->desc()->className()
             << " " << spi->desc()->productInstanceName()
             << " " << spi->desc()->productID()
             << " " << spi->prov()->productID_
             << endl;

        if(spi->prod()==0)
          {
            FDEBUG(10) << "Product is null" << endl;
            continue;
            throw cms::Exception("StreamTranslation","EmptyProduct");
          }

        auto_ptr<EDProduct>
          aprod(const_cast<EDProduct*>(spi->prod()));
        auto_ptr<BranchEntryDescription>
          aedesc(const_cast<BranchEntryDescription*>(spi->prov()));
        auto_ptr<BranchDescription>
          adesc(const_cast<BranchDescription*>(spi->desc()));

        auto_ptr<Provenance> aprov(new Provenance);
        aprov->event   = *(aedesc.get());
        aprov->product = *(adesc.get());
        if(aprov->isPresent()) {
          FDEBUG(10) << "addgroup next " << aprov->productID() << endl;
          FDEBUG(10) << "addgroup next " << aprov->event.productID_ << endl;
          ep->addGroup(auto_ptr<Group>(new Group(aprod,aprov)));
          FDEBUG(10) << "addgroup done" << endl;
        } else {
          FDEBUG(10) << "addgroup empty next " << aprov->productID() << endl;
          FDEBUG(10) << "addgroup empty next " << aprov->event.productID_ 
                                               << endl;
          ep->addGroup(auto_ptr<Group>(new Group(aprov, false)));
          FDEBUG(10) << "addgroup empty done" << endl;
        }
        spi->clear();
      }

    FDEBUG(10) << "Size = " << ep->numEDProducts() << endl;

    return ep;     
  }

}
