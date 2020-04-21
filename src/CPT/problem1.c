#include <stdio.h>

/*
Problem 1

Take five numbers from the user, print out all the even numbers among the user inputs, in the order that the user entered.
If there is no even number in the user input, print out "The list contains no even number"

Example runs:

Enter five numbers: 4 9 11 2 7
Even numbers are 4 2

Enter five numbers: 102 99 71 56 34
Even numbers are 102 56 34

Enter five numbers: 8 7 5 2 4
Even numbers are 8 2 4

Enter five numbers: 9 11 9 11 7
The list contains no even number

Enter five numbers: 1 5 2 1 3
Even numbers are 2

Enter five numbers: 4 7 1 9 5
Even numbers are 4

Enter five numbers: 3 7 1 8 9 5 6
Even numbers are 8 6
*/

int main(void) {
  int a[5];
  int count = 0;
  int NewIndex  = 0;
  int b[5];
  
  printf("Enter five numbers: ");
  for (int i=0; i<5;i++) {
    scanf("%d", &a[i]);
  }
  
  for (int i = 0; i < 5; i++) {
    if (a[i] % 2 == 0) {
      count++;
      b[NewIndex] = a[i];
      NewIndex++;
    }
  }
  
  if (count == 0) {
    printf("The list contains no even number");
  }
  else {
    printf("Even numbers are ");
    for (int i = 0; i< count;i++){
      printf("%d ", b[i]);
    }
  }

  return 0;
}