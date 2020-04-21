#include <stdio.h>
#include <stdlib.h>

/*
Problem 8 (5 points)

Write a C program that takes a number from the user and print out a binary number that is equivalent to the user input.

Example runs:

Enter a number: 7
Converting 7 to a binary number: 111

Enter a number: 578
Converting 578 to a binary number: 1001000010

Enter a number: 10003
Converting 10003 to a binary number: 10011100010011

Enter a number: -11
Converting -11 to a binary number: -1011

Enter a number: -27
Converting -27 to a binary number: -11011
*/

int main(void) {
  int n = 0;
  int a[100];
  int index = 0;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  int temp = abs(n);
  while (temp > 0) {
    a[index] = temp % 2;
    temp = temp/2;
    index++;
  }
  
  printf("Converting %d to a binary number: ", n);
  if (n < 0) {
    printf("-");
  }
  for (int i = index-1; i >= 0; i--) {
    printf("%d", a[i]);
  }
  
  return 0;
}