
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "IOPool/Streamer/interface/StreamTestThing.h"
#include "IOPool/Streamer/test/StreamThingProducer.h"

#include <sstream>

using namespace std;
using namespace edmtestprod;


namespace edmtest_thing
{
  StreamThingProducer::StreamThingProducer(edm::ParameterSet const& ps):
    size_(ps.getParameter<int>("array_size")),
    inst_count_(ps.getParameter<int>("instance_count"))
  {
    for(int i=0;i<inst_count_;++i)
      {
	ostringstream ost;
	ost << i;
	names_.push_back(ost.str());
	produces<edmtestprod::StreamTestThing>(ost.str());
      }
  }

  StreamThingProducer::~StreamThingProducer()
  {
  }  

  // Functions that gets called by framework every event
  void StreamThingProducer::produce(edm::Event& e, edm::EventSetup const&)
  {
    for(int i=0;i<inst_count_;++i)
      {
	std::auto_ptr<StreamTestThing> result(new StreamTestThing(size_));
	e.put(result,names_[i]);
      }
  }
}

using edmtest_thing::StreamThingProducer;
DEFINE_FWK_MODULE(StreamThingProducer)
