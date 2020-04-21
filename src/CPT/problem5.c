#include <stdio.h>
void swap(float *a, float *b);

void swap(float *a, float *b){
  float temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

/*
Problem 5 

Swap Two Floating-Point Numbers
Write function swap() that takes two floating-point numbers effectively exchanges their values. Then complete the main function such that it invokes your swap function and exchanges the values of num_a and num_b that the user enters.

Example runs:

Enter two real numbers:  3.124 4.321
before swap(): num_a = 3.124; num_b = 4.321
after swap(): num_a = 4.321; num_b = 3.124

Enter two real numbers:  9.872 3.134
before swap(): num_a = 9.872; num_b = 3.134
after swap(): num_a = 3.134; num_b = 9.872
*/

int main(void){
  float num_a, num_b;
  printf("Enter two real numbers: ");
  scanf("%f %f", &num_a, &num_b);
  
  printf("before swap(): num_a = %.3f; num_b = %.3f\n", num_a, num_b);
  
  swap(&num_a, &num_b);
  
  printf("after swap(): num_a = %.3f; num_b = %.3f\n", num_a, num_b);
  
  return 0;
}