#include <stdio.h>
#include <math.h>

/*
Write a program that accepts four floating-point numbers representing x1, y1, x2, y2, respectively, and computes the Euclidean distance between two points (x1, y1) and (x2, y2). When displaying distances, print out the number to the second decimal place.

* Note: You may want to use sqrt(x) in math.h that computes the square root of x

E.g.,
Enter four numbers (x1 y1 x2 y2): 25 15 35 10
-> Distance between two points: 11.18
*/

int main(void) {
	float x1,y1,x2,y2;
	float distance = 0;
	
  printf("Enter four numbers (x1 y1 x2 y2): ");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
  
  distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  
  printf("Distance between two points: %.2f", distance);
  
  return 0;
}