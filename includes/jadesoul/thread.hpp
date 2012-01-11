#ifndef THREAD_HPP_1326250391_24
#define THREAD_HPP_1326250391_24
/**
 * File: thread.hpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2012-01-11 10:53:11.242000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"
#include "algorithms.hpp"
#include "utils.hpp"

#ifdef OS_WIN32
#include <process.h>
#else
#include <pthread.h>
#include <semaphore.h>
#endif



class thread {
protected:
#ifdef OS_WIN32
	HANDLE            myThread;
	CRITICAL_SECTION  critSec;  	//same as a mutex
#else
	pthread_t        myThread;
	pthread_mutex_t  myMutex;
#endif
	bool running;
	bool blocking;
	bool verbose;
	
public:
	thread() {
		running = false;
		verbose = false;
#ifdef OS_WIN32
		InitializeCriticalSection(&critSec);
#else
		pthread_mutex_init(&myMutex, NULL);
#endif
	}

	virtual ~thread() {
#ifndef OS_WIN32
		pthread_mutex_destroy(&myMutex);
#endif
		stop();
	}

	bool isrunning() const { return running; }

	void start(bool blocking, bool verbose) {
		if (running) {
			if (verbose)printf("thread: thread already running\n");
			return;
		}
		// have to put this here because the thread can be running
		// before the call to create it returns
		running   = true;
#ifdef OS_WIN32
		// InitializeCriticalSection(&critSec);
		
		// unsigned long _beginthreadex(
			// void *security,
			// unsigned stack_size,
			// unsigned ( __stdcall *start_address )( void * ),
			// void *arglist,
			// unsigned initflag,
			// unsigned *thrdaddr
		// );

		myThread = (HANDLE)_beginthreadex(NULL, 0, this->run,  (void *)this, 0, NULL);
#else
		// pthread_mutex_init(&myMutex, NULL);
		pthread_create(&myThread, NULL, run, (void *)this);
#endif
		this->blocking=blocking;
		this->verbose=verbose;
	}
	
	bool lock() {	//returns false if it can't lock
#ifdef OS_WIN32
		if (blocking) EnterCriticalSection(&critSec);
		else {
			if (!TryEnterCriticalSection(&critSec)) {
				if (verbose)printf("thread: mutext is busy \n");
				return false;
			}
		}
		if (verbose)printf("thread: we are in -- mutext is now locked \n");
#else
		if (blocking) {
			if (verbose)printf("thread: waiting till mutext is unlocked\n");
			pthread_mutex_lock(&myMutex);
			if (verbose)printf("thread: we are in -- mutext is now locked \n");
		} else {
			int value=pthread_mutex_trylock(&myMutex);
			if (value==0) {
				if (verbose)printf("thread: we are in -- mutext is now locked \n");
			}
			else {
				if (verbose)printf("thread: mutext is busy - already locked\n");
				return false;
			}
		}
#endif
		return true;
	}

	bool unlock() {
#ifdef OS_WIN32
		LeaveCriticalSection(&critSec);
#else
		pthread_mutex_unlock(&myMutex);
#endif
		if (verbose)printf("thread: we are out -- mutext is now unlocked \n");
		return true;
	}

	void stop() {
		if (running) {
#ifdef OS_WIN32
			CloseHandle(myThread);
#else
			pthread_detach(myThread);
#endif
			if (verbose)printf("thread: thread stopped\n");
			running=false;
		} else {
			if (verbose)printf("thread: thread already stopped\n");
		}
	}

protected:
	//overide this with the function to put thread main code
	virtual void run() {
		if (verbose)printf("thread: overide run method with your own\n");
	}
#ifdef OS_WIN32
	static unsigned int __stdcall run(void * ptr) {
		thread* me	= (thread*)ptr;
		me->run();
		me->stop();
		return 0;
	}
#else
	static void * run(void * ptr) {
		thread* me	= (thread*)ptr;
		me->run();
		me->stop();
		return 0;
	}
#endif
};


#endif /* THREAD_HPP_1326250391_24 */
