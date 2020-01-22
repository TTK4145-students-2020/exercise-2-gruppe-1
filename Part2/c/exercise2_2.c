#include <pthread.h>
#include <stdio.h>
#define RANGE 1000000
pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
//count_mutex = PTHREAD_MUTEX_INITIALIZER;
static int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    // TODO: increment count_mutex 1_000_000 times
    for (int x = 0; x <= RANGE; x++){
      pthread_mutex_lock(&count_mutex);
      i += 1;
      pthread_mutex_unlock(&count_mutex);
    }
    return 0;
}

void* decrementingThreadFunction(){
    // TODO: decrement count_mutex 1_000_000 times
    for (int x = RANGE; x >= 0; x--){
      pthread_mutex_lock(&count_mutex);
      i -= 1;
      pthread_mutex_unlock(&count_mutex);
    }
    return 0;
}


int main(){
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
    pthread_t incrementingThread;
    pthread_t decrementingThread;
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    

    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);

    printf("The magic number is: %d\n", i);
    return 0;
}
