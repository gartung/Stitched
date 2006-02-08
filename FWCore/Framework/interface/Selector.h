#ifndef Framework_Selector_h
#define Framework_Selector_h

/*----------------------------------------------------------------------
  
Selector: Base class for all "selector" objects, used to select
EDProducts based on information in the associated Provenance.

$Id: Selector.h,v 1.7 2005/09/01 23:30:49 wmtan Exp $

----------------------------------------------------------------------*/

#include <string>

#include "DataFormats/Common/interface/Provenance.h"

namespace edm {

  // Abstract base class.
  class Selector {
  public:
    virtual ~Selector();
    bool match(const Provenance& p) const;
  private:
    virtual bool doMatch(const Provenance& p) const = 0;
  };


  // Select based upon full description of EDProducer.
  class ModuleDescriptionSelector : public Selector {
  public:
    ModuleDescriptionSelector(const ModuleDescription& md):md_(md) {}
    
    virtual bool doMatch(const Provenance& p) const {
      return p.product.module == md_;
    }

  private:
    ModuleDescription md_;
  };


  // Select based on process name.
  class ProcessNameSelector : public Selector {
  public:
    ProcessNameSelector(const std::string& pn):pn_(pn) {}
    
    virtual bool doMatch(const Provenance& p) const {
      return p.product.module.processName_ == pn_;
    }

  private:
    std::string pn_;
  };

}

#endif
