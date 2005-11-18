#include "FWCore/MessageLogger/interface/MessageSender.h"
#include "FWCore/MessageLogger/interface/MessageLoggerQ.h"

#include <iostream>


namespace edm
{


MessageSender::MessageSender( ELseverityLevel const & sev, ELstring const & id )
: errorobj_p( new ErrorObj(sev,id) )
{ }


MessageSender::~MessageSender()
{
  // surrender ownership of our ErrorObj, transferring ownership
  // (via the intermediate MessageLoggerQ) to the MessageLoggerScribe
  // that will (a) route the message text to its destination(s)
  // and will then (b) dispose of the ErrorObj
  MessageLoggerQ::LOG(errorobj_p);
}


}  // namespace edm
