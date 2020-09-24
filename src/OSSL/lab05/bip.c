/*
BIPolar: a program that has bipolar disorder
Charmgil Hong
*/
#include <stdio.h>
#define N_LOOPS 10

int main(void){

  for(int i = 0; i < N_LOOPS; i++){
    fprintf(stdout, "I'm happy, happy, and I'm so happy\n");
    fprintf(stderr, "I'm unhappy, I'm unhappy, I'm so much unhappy\n");
  }

  return 0;
}
