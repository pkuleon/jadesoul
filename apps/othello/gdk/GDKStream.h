// Copyright 2001 Chris Welty
//	All Rights Reserved

#ifndef GDK_GDKSTREAM_H
#define GDK_GDKSTREAM_H

#include "ggsstream.h"
#include "SG.h"
#include "SGMessages.h"

class CGDKStream: public ggsstream {
public:
	virtual void Handle				(const CMsg& msg);
	virtual void HandleLogin		();
	virtual void HandleTell			(const CMsgGGSTell& msg);
	virtual void HandleUnknown		(const CMsgGGSUnknown& msg);

	virtual CSGBase* CreateService(const string& sUserLogin);

};

template <class TRules>
class CServiceGDK : public CSG<TRules> {
public:
	CServiceGDK(ggsstream* apgs);

	virtual void HandleJoin			(const TMsgJoin& msg);
	virtual void HandleUnknown		(const TMsgUnknown& msg);
	virtual void HandleUpdate		(const TMsgUpdate& msg);

	virtual void MakeMoveIfNeeded(const string& idg);
};

#include "GDKStream_T.h"

#endif // GDK_GDKSTREAM_H
