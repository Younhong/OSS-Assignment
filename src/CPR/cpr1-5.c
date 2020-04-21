#include <stdio.h>
#define MAX_LEN 10

typedef enum {false, true} bool;

/*
Problem 5 (5 points)

Write a program that takes 10 integers from the user and check if the sequence of the 10 integers are in a non-decreasing order.

We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (0 <= i < n-1). 

Example runs:

Enter ten integers:  1 2 3 9 10 99 101 149 174 213
-> It is a non-decreasing sequence.

Enter ten integers:  1 2 3 3 4 4 5 6 7 8
-> It is a non-decreasing sequence.

Enter ten integers:  -9999 -999 -99 -9 0 1 2 3 4 5
-> It is a non-decreasing sequence.

Enter ten integers:  1 2 3 2 4 5 6 7 8 9 9
-> It is NOT a non-decreasing sequence.

Enter ten integers:  1 2 3 4 5 6 7 8 0 0
-> It is NOT a non-decreasing sequence. 
*/

int main(void){
  int arr[MAX_LEN];
  printf("Enter ten integers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d", 
                  &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], 
                  &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
  
  bool IsOrdered = true;
  
  for (int i = 0; i < 10; i++){
    for (int j  = i; j < 10; j++){
      if (arr[i] > arr[j]){
        IsOrdered = false;
      }
    }
  }
  
  if (IsOrdered) {
    printf("It is a non-decreasing sequence.");
  }
  else {
    printf("It is NOT a non-decreasing sequence.");
  }
  
  return 0;
}