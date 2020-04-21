#include <stdio.h>
#include <limits.h>

/*
Problem 3

Given a non-empty array of integers, return the third maximum number in this array. If it does not exist, return the maximum number.

Example 1:
Input: [3, 2, 1]
Output: 1
Explanation: The third maximum is 1.

Example 2:
Input: [1, 2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

Example 3:
Input: [2, 2, 3, 1]
Output: 1
Explanation: Note that the third maximum here means the third maximum distinct number.
Both numbers with value 2 are both considered as second maximum.

* Extra credits (optional; upto 50%): write a solution with a single loop and send your solution (per team) for the extra credits to the instructor (charmgil@handong.edu) 

* The output should be exactly like this 
(test does not take any input):

arr1: 1
arr2: 2
arr3: 1
arr4: 4
arr5: 2
arr6: 7
arr7: 6 
*/

int solution(int* nums, int numsSize){
  int max1 = 0, max2 = 0, max3 = 0;
  
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] != max1 && nums[i] != max2 && nums[i] != max3){
      if (nums[i] > max3) {
        max1 = max2;
        max2 = max3;
        max3 = nums[i];
      } 
      else if (nums[i] > max2) {
        max1 = max2;
        max2 = nums[i];
      }
      else if (nums[i] > max1) {
        max1 = nums[i];
      }
    }
  }
  
  if (max1 == 0) {
    return max3;
  }
  else 
    return max1;
}

int main(void){
	int arr1[] = {3, 2, 1};
  int arr2[] = {1, 2};
  int arr3[] = {2, 2, 3, 1};
  int arr4[] = {4, 2, 2, 2, 2, 2};
  int arr5[] = {5, 3, 1, 2, 3, 1, 1, 2, 2, 1};
  int arr6[] = {1, 2, 1, 4, 1, 6, 1, 7, 1, 9, 3, 1, 3, 3, 3, 3, 1, 1, 3, 3, 3, 2, 4, 5, 8, 3, 3};
  int arr7[] = {2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 9, 9, 9};
  int answer = 0;
  
  answer = solution(arr1, sizeof(arr1)/sizeof(int));
  printf("arr1: %d\n", answer);
  
  answer = solution(arr2, sizeof(arr2)/sizeof(int));
  printf("arr2: %d\n", answer);
  
  answer = solution(arr3, sizeof(arr3)/sizeof(int));
  printf("arr3: %d\n", answer);
  
  answer = solution(arr4, sizeof(arr4)/sizeof(int));
  printf("arr4: %d\n", answer);
  
  answer = solution(arr5, sizeof(arr5)/sizeof(int));
  printf("arr5: %d\n", answer);
  
  answer = solution(arr6, sizeof(arr6)/sizeof(int));
  printf("arr6: %d\n", answer);
  
  answer = solution(arr7, sizeof(arr7)/sizeof(int));
  printf("arr7: %d\n", answer);
  
  return 0;
}