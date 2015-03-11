/** \class edm::AssociationMapProducer
\author W. David Dagenhart, created 10 March 2015
*/

#include "DataFormats/Common/interface/AssociationMap.h"
#include "DataFormats/Common/interface/OneToValue.h"
#include "DataFormats/Common/interface/OneToOne.h"
#include "DataFormats/Common/interface/OneToMany.h"
#include "DataFormats/Common/interface/OneToManyWithQuality.h"
#include "DataFormats/Common/interface/Handle.h"
#include "DataFormats/Common/interface/View.h"
#include "FWCore/Framework/interface/one/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Utilities/interface/EDGetToken.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include <memory>
#include <vector>

namespace edm {
  class EventSetup;
}

namespace edmtest {

  class AssociationMapProducer : public edm::one::EDProducer<> {
  public:

    explicit AssociationMapProducer(edm::ParameterSet const&);
    virtual ~AssociationMapProducer();

    void produce(edm::Event&, edm::EventSetup const&) override;

    typedef edm::AssociationMap<edm::OneToValue<std::vector<int>, double > > AssocOneToValue;
    typedef edm::AssociationMap<edm::OneToOne<std::vector<int>, std::vector<int> > > AssocOneToOne;
    typedef edm::AssociationMap<edm::OneToMany<std::vector<int>, std::vector<int> > > AssocOneToMany;
    typedef edm::AssociationMap<edm::OneToManyWithQuality<std::vector<int>, std::vector<int>, double > > AssocOneToManyWithQuality;
    typedef edm::AssociationMap<edm::OneToOne<edm::View<int>, edm::View<int> > > AssocOneToOneView;

  private:

    edm::EDGetTokenT<std::vector<int> > inputToken1_;
    edm::EDGetTokenT<std::vector<int> > inputToken2_;
  };

  AssociationMapProducer::AssociationMapProducer(edm::ParameterSet const& pset) {

    inputToken1_ = consumes<std::vector<int> >(pset.getParameter<edm::InputTag>("inputTag1"));
    inputToken2_ = consumes<std::vector<int> >(pset.getParameter<edm::InputTag>("inputTag2"));

    produces<AssocOneToOne>();
    produces<AssocOneToOne>("twoArg");
    produces<AssocOneToValue>();
    produces<AssocOneToValue>("handleArg");
    produces<AssocOneToMany>();
    produces<AssocOneToManyWithQuality>();
    produces<AssocOneToOneView>();
  }

  AssociationMapProducer::~AssociationMapProducer() { }

  void AssociationMapProducer::produce(edm::Event& event, edm::EventSetup const&) {

    edm::Handle<std::vector<int> > inputCollection1;
    event.getByToken(inputToken1_, inputCollection1);
    std::vector<int> const& vint1 = *inputCollection1;

    edm::Handle<std::vector<int> > inputCollection2;
    event.getByToken(inputToken2_, inputCollection2);
    std::vector<int> const& vint2 = *inputCollection2;

    // insert some entries into some AssociationMaps, in another
    // module we will readout the contents and check that we readout
    // the same content as was put in. Note that the particular values
    // used are arbitrary and have no meaning.

    std::auto_ptr<AssocOneToOne> assoc1(new AssocOneToOne(&event.productGetter()));
    assoc1->insert(edm::Ref<std::vector<int> >(inputCollection1, 0),
                   edm::Ref<std::vector<int> >(inputCollection2, 1));
    assoc1->insert(edm::Ref<std::vector<int> >(inputCollection1, 2),
                   edm::Ref<std::vector<int> >(inputCollection2, 3));
    event.put(assoc1);

    std::auto_ptr<AssocOneToOne> assoc2(new AssocOneToOne(inputCollection1, inputCollection2));
    assoc2->insert(edm::Ref<std::vector<int> >(inputCollection1, 0),
                   edm::Ref<std::vector<int> >(inputCollection2, 1));
    assoc2->insert(edm::Ref<std::vector<int> >(inputCollection1, 2),
                   edm::Ref<std::vector<int> >(inputCollection2, 4));
    event.put(assoc2, "twoArg");

    std::auto_ptr<AssocOneToValue> assoc3(new AssocOneToValue(&event.productGetter()));
    assoc3->insert(edm::Ref<std::vector<int> >(inputCollection1, 0), 11.0);
    assoc3->insert(edm::Ref<std::vector<int> >(inputCollection1, 2), 12.0);
    event.put(assoc3);

    std::auto_ptr<AssocOneToValue> assoc4(new AssocOneToValue(inputCollection1));
    assoc4->insert(edm::Ref<std::vector<int> >(inputCollection1, 0), 21.0);
    assoc4->insert(edm::Ref<std::vector<int> >(inputCollection1, 2), 22.0);
    event.put(assoc4, "handleArg");

    std::auto_ptr<AssocOneToMany> assoc5(new AssocOneToMany(&event.productGetter()));
    assoc5->insert(edm::Ref<std::vector<int> >(inputCollection1, 0),
                   edm::Ref<std::vector<int> >(inputCollection2, 1));
    assoc5->insert(edm::Ref<std::vector<int> >(inputCollection1, 2),
                   edm::Ref<std::vector<int> >(inputCollection2, 4));
    assoc5->insert(edm::Ref<std::vector<int> >(inputCollection1, 2),
                   edm::Ref<std::vector<int> >(inputCollection2, 6));
    event.put(assoc5);
  }
}
using edmtest::AssociationMapProducer;
DEFINE_FWK_MODULE(AssociationMapProducer);
