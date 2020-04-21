#include <stdio.h>

/*
Problem 7 (5 points)

Take an integer from the user. If the number is positive, print the sum of all integers from 1 to the user input. If the number is negative, print out an error message "Wrong input."
 
Example runs:
Enter a number: -5
Wrong input.

Enter a number: 100
The sum of all integers from 1 to 100: 5050

Enter a number: 500
The sum of all integers from 1 to 500: 125250
*/

int main(void) {
  int n = 0;
  int sum = 0;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if (n <= 0) {
    printf("Wrong input.");
  }
  else {
    for (int i = 0; i <= n; i++) {
      sum = sum + i;
    }
    printf("The sum of all integers from 1 to %d: %d", n, sum);
  }
  return 0;
}