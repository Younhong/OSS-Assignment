#include <stdio.h>
#define MAX_LEN 10

/*
Problem 1 (5 points)

Write a program that takes 10 integers and one additional positive integer from the user. 
The program should store the first 10 integers in an (length 10) array; and assign the additional integer to variable k. 
Then it rotates the array to the right by k, and return the resulting array.

Example runs:
Enter ten integers: 1 2 3 4 5 6 7 8 9 10
Enter one more positive integer (k): 3
-> After 3 rotates: 8 9 10 1 2 3 4 5 6 7

Enter ten integers: -7 -1 -32 19 -17 0 5 29 12 91
Enter one more positive integer (k): 7
-> After 7 rotates: 19 -17 0 5 29 12 91 -7 -1 -32

Enter ten integers: 3 3 3 3 3 3 3 1 3 3
Enter one more positive integer (k): 4
-> After 4 rotates: 3 1 3 3 3 3 3 3 3 3

Enter ten integers: 9 8 7 6 5 4 3 2 1 0
Enter one more positive integer (k): 1
-> After 1 rotates: 0 9 8 7 6 5 4 3 2 1
*/

int main(void){
  int arr[MAX_LEN];
  int k;
  printf("Enter ten integers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d", 
                  &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], 
                  &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
  printf("Enter one more positive integer (k): ");
  scanf("%d", &k);
  

  for (int i = 0; i < k; i++) {  
    int prev_temp = arr[0];
    int next_temp = arr[1];
    for (int j = 0; j < 10; j++) {
      next_temp = arr[(j+1)%10];
      arr[(j+1)%10] = prev_temp;
      prev_temp = next_temp;\
    }
  }
  
  printf("After %d rotates:", k);
  for(int i = 0; i < MAX_LEN; i++){
          printf(" %d", arr[i]);
  }
  printf("\n");
  
  return 0;
}