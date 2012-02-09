// Copyright 2001 Chris Welty
//	All Rights Reserved

#pragma once

#include "types.h"

#include <iostream>
#include <fstream>
using namespace std;

#if _WIN32
#include <winsock.h>
#else
#include <sockets.h>
#endif

class sockbuf : public streambuf {
public:
	// construction/destruction
	sockbuf();
	virtual ~sockbuf();

	// overrides
	virtual int underflow();
	virtual int overflow(int c=EOF);
	virtual int sync();

	// errors
	enum { kErrUnknown=0x8600, kErrCantStartup, kErrNoHost, kErrNoProtocol, kErrNoSocket,
				kErrCantConnect, kErrConnectionReset, kErrConnectionClosed,
				kErrNotConnected, kErrAlreadyConnected };
	int Err() const;

	bool IsConnected() const;

	int connect(const string& sServer, int nPort);
	int disconnect();

protected:
	enum { fLogging=1, nBufSize=1024 };

	bool fConnected;

	SOCKET sock;
	ofstream *fplog;
	enum {kLogNone, kLogRecv, kLogSend} loglast;
	char *buf;
	int err;
};
