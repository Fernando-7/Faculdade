#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *idThread(void *X){
  long num;
  num = (long)X + 1;
  printf("Sou a thread #%ld!\n", tid);
  pthread_exit(NULL);
}

int main (){
  pthread_t threads[5];
  long x;
  int criar;
  for(x=0; x<4; x++){
	criar = pthread_create(&threads[x], NULL, idThread, (void *)x);
    if (criar != 0){
      exit(-1);
    }
  }
  pthread_exit(NULL);
}
