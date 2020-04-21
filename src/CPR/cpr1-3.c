#include <stdio.h>
#include <math.h>

/*
Problem 3 (5 points)

Write a program that takes a positive integer h ranging between 1 and 15 and draws a diamond of height k, using the pound sign (#).

Examples run:

Enter an integer (k): 1
#

Enter an integer (k): 4
 #
# #
# #
 #

Enter an integer (k): 5
  #
 # #
# # #
 # #
  #

Enter an integer (k): 6
  #
 # #
# # #
# # #
 # #
  #
*/

int main(void) {
  int n = 0;
  
  printf("Enter an integer (k): ");
  scanf("%d", &n);
  
  if (n % 2 == 0) {
    for (int i=0; i< n/2; i++) {
      for (int j = 0; j < n/2-i-1; j++) {
        printf(" ");
      }
      for (int j = 0; j < i+1; j++) {
        printf("# ");
      }    
      printf("\n");
    }
    for (int i=0; i< n/2; i++) {
      for (int j = 0; j < i; j++) {
        printf(" ");
      }
      for (int j = 0; j < n/2-i; j++) {
        printf("# ");
      }
      printf("\n");
    }
  }
  else {
    for (int i=0; i< round((float)n/2); i++) {
      for (int j = 0; j < round((float)n/2)-i-1; j++) {
        printf(" ");
      }
      for (int j = 0; j < i+1; j++) {
        printf("# ");
      }    
      printf("\n");
    }
    for (int i=0; i< n- round((float)n/2); i++) {
      for (int j = 0; j < i+1; j++) {
        printf(" ");
      }
      for (int j = 0; j < floor((float)n/2)-i; j++) {
        printf("# ");
      }
      printf("\n");
    } 
  }
  
  return 0;
}