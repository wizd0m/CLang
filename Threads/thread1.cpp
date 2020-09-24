#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;
#define NUM_THREADS 5

void *PrintHello(void *threadid) {
   long tid;
   long counter;
   tid = (long)threadid;
   counter = 0;
   while(counter < 99999) {
	std::cout << "Thread ID: " << tid << " : " << counter++;
        std::cout << "                           \r";
	std::cout.flush();
	//fflush(stdout);
   }
   std:cout << std::endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   int i;
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
      if (rc) {
         printf("Error:unable to create thread, %d\n", rc);
         exit(-1);
      }
   }
   pthread_exit(NULL);
   return 0;
}

