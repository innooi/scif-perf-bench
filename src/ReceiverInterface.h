/*

	© Copyright 2015 CERN

	This software is distributed under the terms of the 
	GNU General Public Licence version 3 (GPL Version 3), 
	copied verbatim in the file “LICENSE”.

	In applying this licence, CERN does not waive 
	the privileges and immunities granted to it by virtue of its status 
	as an Intergovernmental Organization or submit itself to any jurisdiction.

	Author: Aram Santogidis <aram.santogidis@cern.ch>

*/

#ifndef _RECEIVERINTERFACE_H_
#define _RECEIVERINTERFACE_H_

#include "PeerInterface.h"

class ReceiverInterface : public virtual PeerInterface
{
public:
	virtual ~ReceiverInterface () {}
	virtual int recv_payload () = 0;
	virtual bool data_ok () = 0;
};

#endif