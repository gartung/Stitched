#ifndef EVENTSETUPPRODUCER_PROXYARGUMENTFACTORYTEMPLATE_H
#define EVENTSETUPPRODUCER_PROXYARGUMENTFACTORYTEMPLATE_H
// -*- C++ -*-
//
// Package:     CoreFramework
// Class  :     ProxyArgumentFactoryTemplate
// 
/**\class ProxyArgumentFactoryTemplate ProxyArgumentFactoryTemplate.h Core/CoreFramework/interface/ProxyArgumentFactoryTemplate.h

 Description: <one line class summary>

 Usage:
    <usage>

*/
//
// Author:      Chris Jones
// Created:     Mon Apr 11 16:20:52 CDT 2005
// $Id: ProxyArgumentFactoryTemplate.h,v 1.1 2005/05/29 02:29:53 wmtan Exp $
//

// system include files

// user include files
#include "FWCore/CoreFramework/interface/ProxyFactoryBase.h"
#include "FWCore/CoreFramework/interface/DataKey.h"

// forward declarations
namespace edm {
   namespace eventsetup {
      
template <class T, class ArgT>
class ProxyArgumentFactoryTemplate : public ProxyFactoryBase
{

   public:
      typedef typename T::record_type record_type;

      ProxyArgumentFactoryTemplate(ArgT iArg) : arg_(iArg) {}
      //virtual ~ProxyArgumentFactoryTemplate()

      // ---------- const member functions ---------------------
      virtual std::auto_ptr<DataProxy> makeProxy() const {
         return std::auto_ptr<DataProxy>(new T(arg_));
      }
            
      virtual DataKey makeKey(const std::string& iName) const {
         return DataKey(DataKey::makeTypeTag< typename T::value_type>(),iName.c_str());
      }
      
      // ---------- static member functions --------------------

      // ---------- member functions ---------------------------

   private:
      ProxyArgumentFactoryTemplate(const ProxyArgumentFactoryTemplate&); // stop default

      const ProxyArgumentFactoryTemplate& operator=(const ProxyArgumentFactoryTemplate&); // stop default

      // ---------- member data --------------------------------
      mutable ArgT arg_;
};

   }
}
#endif /* EVENTSETUPPRODUCER_PROXYARGUMENTFACTORYTEMPLATE_H */
