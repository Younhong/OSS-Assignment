#include <stdio.h>

/*
Problem 2 (5 points + 2.5 extra)

Given an array of (2n - 1) integers, where (n - 1) integers appear exactly twice, find the number that appears only once in the array. 

* 50% extra credits: The solution using a nested loop would be too easy. Try to come up with a solution that uses only one loop. 
- If you think your team found an optimal solution qualifying for the extra credits, please email your solution with a brief explanation how you addressed it to charmgil@handong.edu.
- In your message, please also include the names of all your team members (including yourself!).

Example runs:
* The output should be exactly like this (test does not take any input):

arr1: -1
arr2: 4
arr3: 2
arr4: 9 
*/

int solution(int prob[], int n){
	int t = 0;
	for (int i = 0; i < n; i++) {
	  int count = 0;
	  for (int j = 0; j < n; j++) {
	    if (i !=j && prob[j] == prob[i]){
	       count++;
	    }
	  }
	   if (count == 0) t = prob[i];
	}
	
	return t;
}

int main(void) {
  int arr1[] = {1, 1, 0, 0, -1};
  int arr2[] = {1, 7, 3, 0, 4, 0, 1, 7, 3};
  int arr3[] = {2, 101, 88, -31, 27, 27, 9, 0, 1, 101, 3, 3, -31, 1, 0, 88, 9};
  int arr4[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 9, -1, -1, -2,-2, -3, -3, -4, -4, -5, -5};
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