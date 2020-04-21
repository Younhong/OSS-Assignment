#include <stdio.h>

typedef enum {false, true} bool;

/*
Problem 6 (5 points)

Take numbers from the user that fall in the range of 0 and 100 (inclusive).  When the user enters a number that is smaller than 0 or larger than 100, stop taking inputs and print out the largest and smallest numbers among the user inputs.

Example runs:
Enter a number between 0 and 100: 55
Enter a number between 0 and 100: 22
Enter a number between 0 and 100: 11
Enter a number between 0 and 100: 64
Enter a number between 0 and 100: 72
Enter a number between 0 and 100: 99
Enter a number between 0 and 100: 5
Enter a number between 0 and 100: 67
Enter a number between 0 and 100: 999
The largest number is 99, and
the smallest number is 5. 
*/

int main(void) {
  int largest_number = 0;
  int smallest_number = 100;
  bool is_between_range = true;
  int n = 0;
  while (is_between_range) {
    printf("Enter a number between 0 and 100: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 100){
      is_between_range = false;
    }
    else {
      if (n > largest_number) largest_number = n;
      if (n < smallest_number) smallest_number = n;
    }
  }
  
  printf("The largest number is %d, and\nthe smallest number is %d.", largest_number, smallest_number);
  
  return 0;
}