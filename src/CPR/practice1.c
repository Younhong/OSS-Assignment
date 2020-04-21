#include <stdio.h>

/*
Write a program that takes an integer from the user and computes the summation of all integers from 0 to the user input.

E.g., 
Enter a number: 3
-> 6

Note that your program should be able to handle negative numbers.

E.g.,
Enter a number: -10
-> -55
*/

int main(void){
  int num = 0;
  int sum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (num > 0) {
    for (int i = 1; i <= num; i++) {
      sum = sum + i;
    }
  }
  else {
    for (int i = -1; i >= num; i--) {
      sum = sum + i;
    }
  }
  printf("%d", sum);
  
  return 0;
}