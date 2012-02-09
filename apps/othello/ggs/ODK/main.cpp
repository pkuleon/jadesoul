// Copyright 2001 Chris Welty
//	All Rights Reserved

#include "types.h"

#include "ODKstream.h"

int main() {
	int err;
	CODKStream gs;	

	// Connect(server, port)
	if (err = gs.Connect("skatgame.net",5000)) {
		cerr << gs.ErrText(err) << "\n";
		return err;
	}
	
	// Login(name, password)
	if (err = gs.Login("jadesoul","gbsoft")) {
		cerr << gs.ErrText(err) << "\n";


		gs.Disconnect();	
		return err;
	}
	

	gs.Process();			// receive, parse, and pass on messages

	return 0;
}