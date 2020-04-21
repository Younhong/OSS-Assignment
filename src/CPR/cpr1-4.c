#include <stdio.h>
#include <stdlib.h>

/*
Problem 4 (5 points + 2.5 extra)

Consider an integer array of length n whose elements are ranging between 1 and n. Notice that the array may have duplicates. 
Write a program that finds the integer that most frequently appears in the array. You may assume that there always is only one such element.

* 50% extra credits: Again the solution that involves nested loops is easy. Try to come up with a solution that uses only non-nested loops. 
- If you think your team found an optimal solution qualifying for the extra credits, please email your solution with a brief explanation how you addressed it to charmgil@handong.edu.
- In your message, please also include the names of all your team members (including yourself!).


Example runs:
* The output should be exactly like this (test does not take any input):

arr1: 4
arr2: 1
arr3: 3
arr4: 2 
*/

int solution(int prob[], int n){
  int most_freq_n = -1;	// this keeps the integer that appears the most
  int most_count = 0;
    
  for (int i=0; i<n; i++){
    int count = 0;
    for (int j=0;j<n;j++){
      if (j!=i && prob[j] == prob[i]) count++;
    }
    if (count > most_count) {
      most_count = count;
      most_freq_n = prob[i];
    }
  }
  
  return most_freq_n;
}

int main(void) {
  int arr1[] = {1, 2, 3, 4, 4, 5};
  int arr2[] = {5, 3, 1, 2, 3, 1, 1, 2, 2, 1};
  int arr3[] = {1, 2, 1, 4, 1, 6, 1, 7, 1, 9, 3, 1, 3, 3, 3, 3, 1, 1, 3, 3, 3, 2, 4, 5, 8, 3, 3};
  int arr4[] = {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 9, 9, 9};
  int answer = 0;
  
  answer = solution(arr1, sizeof(arr1)/sizeof(int));
  printf("arr1: %d\n", answer);
  
  answer = solution(arr2, sizeof(arr2)/sizeof(int));
  printf("arr2: %d\n", answer);
  
  answer = solution(arr3, sizeof(arr3)/sizeof(int));
  printf("arr3: %d\n", answer);
  
  answer = solution(arr4, sizeof(arr4)/sizeof(int));
  printf("arr4: %d\n", answer);
  
  return 0;
}