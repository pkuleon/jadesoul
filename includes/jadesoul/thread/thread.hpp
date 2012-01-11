#ifndef THREAD_HPP_1326250369_85
#define THREAD_HPP_1326250369_85
/**
 * File: thread.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2012-01-11 10:52:49.853000
 * Written In: Peking University, beijing, China
 */

#include "includes.hpp"


#ifdef TARGET_WIN32
	#include <process.h>
#else
    #include <pthread.h>
    #include <semaphore.h>
#endif

class ofxThread{

	public:
		ofxThread();
		virtual ~ofxThread();
		bool isThreadRunning();
		void startThread(bool _blocking = true, bool _verbose = true);
		bool lock();
		bool unlock();
		void stopThread();

	protected:

		//-------------------------------------------------
		//you need to overide this with the function you want to thread
		virtual void threadedFunction(){
			if(verbose)printf("ofxThread: overide threadedFunction with your own\n");
		}

		//-------------------------------------------------

		#ifdef TARGET_WIN32
			static unsigned int __stdcall thread(void * objPtr){
				ofxThread* me	= (ofxThread*)objPtr;
				me->threadedFunction();
				me->stopThread();
				return 0;
			}

		#else
			static void * thread(void * objPtr){
				ofxThread* me	= (ofxThread*)objPtr;
				me->threadedFunction();
				me->stopThread();
				return 0;
			}
		#endif


	#ifdef TARGET_WIN32
			HANDLE            myThread;
			CRITICAL_SECTION  critSec;  	//same as a mutex
	#else
			pthread_t        myThread;
			pthread_mutex_t  myMutex;
	#endif

	bool threadRunning;
	bool blocking;
	bool verbose;
};


//------------------------------------------------- 
ofxThread::ofxThread(){ 
   threadRunning = false; 
   verbose = false;
   #ifdef TARGET_WIN32 
      InitializeCriticalSection(&critSec); 
   #else 
      pthread_mutex_init(&myMutex, NULL); 
   #endif 
} 

//------------------------------------------------- 
ofxThread::~ofxThread(){ 
   #ifndef TARGET_WIN32 
      pthread_mutex_destroy(&myMutex); 
   #endif 
   stopThread(); 
} 

//------------------------------------------------- 
bool ofxThread::isThreadRunning(){ 
   //should be thread safe - no writing of vars here 
   return threadRunning; 
} 

//------------------------------------------------- 
void ofxThread::startThread(bool _blocking, bool _verbose){ 
   if( threadRunning ){ 
      if(verbose)printf("ofxThread: thread already running\n"); 
      return; 
   } 

   //have to put this here because the thread can be running 
   //before the call to create it returns 
   threadRunning   = true; 

   #ifdef TARGET_WIN32 
      //InitializeCriticalSection(&critSec); 
      myThread = (HANDLE)_beginthreadex(NULL, 0, this->thread,  (void *)this, 0, NULL); 
   #else 
      //pthread_mutex_init(&myMutex, NULL); 
      pthread_create(&myThread, NULL, thread, (void *)this); 
   #endif 

   blocking      =   _blocking; 
   verbose         = _verbose; 
} 

//------------------------------------------------- 
//returns false if it can't lock 
bool ofxThread::lock(){ 

   #ifdef TARGET_WIN32 
      if(blocking)EnterCriticalSection(&critSec); 
      else { 
         if(!TryEnterCriticalSection(&critSec)){ 
            if(verbose)printf("ofxThread: mutext is busy \n"); 
            return false; 
         } 
      } 
      if(verbose)printf("ofxThread: we are in -- mutext is now locked \n"); 
   #else 

      if(blocking){ 
         if(verbose)printf("ofxThread: waiting till mutext is unlocked\n"); 
         pthread_mutex_lock(&myMutex); 
         if(verbose)printf("ofxThread: we are in -- mutext is now locked \n"); 
      }else{ 
         int value = pthread_mutex_trylock(&myMutex); 
         if(value == 0){ 
            if(verbose)printf("ofxThread: we are in -- mutext is now locked \n"); 
         } 
         else{ 
            if(verbose)printf("ofxThread: mutext is busy - already locked\n"); 
            return false; 
         } 
      } 
   #endif 

   return true; 
} 

//------------------------------------------------- 
bool ofxThread::unlock(){ 

   #ifdef TARGET_WIN32 
      LeaveCriticalSection(&critSec); 
   #else 
      pthread_mutex_unlock(&myMutex); 
   #endif 

   if(verbose)printf("ofxThread: we are out -- mutext is now unlocked \n"); 

   return true; 
} 

//------------------------------------------------- 
void ofxThread::stopThread(){ 
   if(threadRunning){ 
      #ifdef TARGET_WIN32 
         CloseHandle(myThread); 
      #else 
         //pthread_mutex_destroy(&myMutex); 
         pthread_detach(myThread); 
      #endif 
      if(verbose)printf("ofxThread: thread stopped\n"); 
      threadRunning = false; 
   }else{ 
      if(verbose)printf("ofxThread: thread already stopped\n"); 
   } 
}


#endif /* THREAD_HPP_1326250369_85 */
