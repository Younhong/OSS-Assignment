#include <stdio.h>

/*
Problem 2

Write a program that takes 10 integers from the user and print them out in reverse input order. Your program must use an array to store the user inputs.

Example runs:

Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10 
-> Reverse: 10 9 8 7 6 5 4 3 2 1

Enter 10 numbers: 1 9 8 7 6 5 4 3 2 0 
-> Reverse: 0 2 3 4 5 6 7 8 9 1

Enter 10 numbers: -5 -1 -1 3 4 9 -4 6 -7 9
-> Reverse: 9 -7 6 -4 9 4 3 -1 -1 -5

Enter 10 numbers: 4 8 -7 9 10 -2 -4 9 -1 11 
-> Reverse: 11 -1 9 -4 -2 10 9 -7 8 4

Enter 10 numbers: -5 -9 14 2 6 8 -19 5 7 -3 
-> Reverse: -3 7 5 -19 8 6 2 14 -9 -5
*/

int main(void) {
  int a[10];
  printf("Enter 10 numbers: ");
  for (int i=0; i<10;i++) {
    scanf("%d", &a[i]);
  }
  
  printf("Reverse: ");
  for (int i=0;i<10;i++){
    printf("%d ", a[9-i]);
  }
  
  return 0;
}