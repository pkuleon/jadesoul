// Copyright 2001 Chris Welty
//	All Rights Reserved

#ifndef ODK_GGSSTREAM_H
#define ODK_GGSSTREAM_H


#include "sockbuf.h"
#include <set>
using namespace std;

class CMsg;
class COs;

#include "GGSMessage.h"
#include "OsMessage.h"
#include "OsObjects.h"

class ggsstream : public iostream {
public:
	// construction/destruction
	ggsstream();
	virtual ~ggsstream();

	// Connection, disconnection
	virtual int Connect(const string& sServer, int nPort);
	virtual int Disconnect();

	// login, logout
	virtual int Login(const char* sLogin, const char* sPassword);
	virtual int Logout();
	virtual const string& GetLogin() const;

	// turn stream data into messages
	virtual void Process();

	// Information
	virtual bool IsConnected() const;
	virtual bool IsLoggedIn() const;
	virtual bool HasOthelloServer() const;

	// return an error description
	static const char* ErrText(int err);
	enum { kErrUnknown=0x8200, kErrBadPassword,
		kErrLoggedIn, kErrLoggedOut, kErrConnected, kErrNotConnected,
		kErrNoStreambuf, kErrUserCancelled };

	// Handle messages relating to persistent data
	void BaseGGSLogin		();
	void BaseGGSUserDelta	(const CMsgGGSUserDelta* pmsg);
	void BaseGGSDisconnect	();

	void BaseOsEnd			(const CMsgOsEnd* pmsg);
	void BaseOsGameOver		(const CMsgOsMatchDelta* pmsg, const string& idg);
	void BaseOsJoin			(const CMsgOsJoin* pmsg);
	void BaseOsLogin		();
	void BaseOsLogout		();
	void BaseOsMatch		(const CMsgOsMatch* pmsg);
	void BaseOsMatchDelta	(const CMsgOsMatchDelta* pmsg);
	void BaseOsRequestDelta	(const CMsgOsRequestDelta* pmsg);
	void BaseOsUpdate		(const CMsgOsUpdate* pmsg);

	// Handle messages
	virtual void HandleGGS				(const CMsg* pmsg);
	virtual void HandleGGSAlias			(const CMsgGGSAlias* pmsg);
	virtual void HandleGGSDisconnect	();
	virtual void HandleGGSErr			(const CMsgGGSErr* pmsg);
	virtual void HandleGGSFinger		(const CMsgGGSFinger* pmsg);
	virtual void HandleGGSHelp			(const CMsgGGSHelp* pmsg);
	virtual void HandleGGSLogin			();
	virtual void HandleGGSTell			(const CMsgGGSTell* pmsg);
	virtual void HandleGGSUnknown		(const CMsgGGSUnknown* pmsg);
	virtual void HandleGGSUserDelta		(const CMsgGGSUserDelta* pmsg);
	virtual void HandleGGSWho			(const CMsgGGSWho* pmsg);

	virtual void HandleOs				(const CMsgOs* pmsg);
	virtual void HandleOsAbortRequest	(const CMsgOsAbortRequest* pmsg);
	virtual void HandleOsComment		(const CMsgOsComment* pmsg);
	virtual void HandleOsEnd			(const CMsgOsEnd* pmsg);
	virtual void HandleOsErr			(const CMsgOsErr* pmsg);
	virtual void HandleOsFatalTimeout	(const CMsgOsFatalTimeout* pmsg);
	virtual void HandleOsFinger			(const CMsgOsFinger* pmsg);
	virtual void HandleOsGameOver		(const CMsgOsMatchDelta* pmsg, const string& idg);
	virtual void HandleOsHistory		(const CMsgOsHistory* pmsg);
	virtual void HandleOsJoin			(const CMsgOsJoin* pmsg);
	virtual void HandleOsLogin			();
	virtual void HandleOsLogout			();
	virtual void HandleOsLook			(const CMsgOsLook* pmsg);
	virtual void HandleOsMatch			(const CMsgOsMatch* pmsg);
	virtual void HandleOsMatchDelta		(const CMsgOsMatchDelta* pmsg);
	virtual void HandleOsRank			(const CMsgOsRank* pmsg);
	virtual void HandleOsRatingUpdate	(const CMsgOsRatingUpdate* pmsg);
	virtual void HandleOsRequestDelta	(const CMsgOsRequestDelta* pmsg);
	virtual void HandleOsStored			(const CMsgOsStored* pmsg);
	virtual void HandleOsTimeout		(const CMsgOsTimeout* pmsg);
	virtual void HandleOsTop			(const CMsgOsTop* pmsg);
	virtual void HandleOsTrustViolation	(const CMsgOsTrustViolation* pmsg);
	virtual void HandleOsUndoRequest	(const CMsgOsUndoRequest* pmsg);
	virtual void HandleOsUnknown		(const CMsgOsUnknown* pmsg);
	virtual void HandleOsUpdate			(const CMsgOsUpdate* pmsg);
	virtual void HandleOsWatch			(const CMsgOsWatch* pmsg);
	virtual void HandleOsWatchDelta		(const CMsgOsWatchDelta* pmsg);
	virtual void HandleOsWho			(const CMsgOsWho* pmsg);

	// persistent 
	map<string,COsGame> idToGame;
	map<string,COsMatch> idToMatch;
	map<string,COsRequest> idToRequest;

	COsGame* PGame(const string& idg);

protected:
	virtual int await(const char* sAwait);

	// helper function for BaseOsMatchDelta
	virtual void EndGame(const CMsgOsMatchDelta* pmsg, const string& idg);

	// turn stream data into messages
	virtual void ProcessLine(string& sLine);
	virtual void ProcessMessage();

	// parse messages
	virtual CMsg* GetMsgType(istream& is);
	virtual CMsg* GetMsgTypeOs(istream& is);
	virtual CMsg* GetMsgTypeGGS(istream& is);

	// post messages
	virtual void Post(CMsg* pmsg);

	bool fLoggedIn, fConnected, fHasOs;
	string sLogin;

private:
	string sMsg;
	sockbuf *psockbuf;
};

#endif	//ODK_GGSSTREAM_H