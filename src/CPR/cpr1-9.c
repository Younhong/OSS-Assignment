#include <stdio.h>
#include <math.h>

/*
Problem 9 (5 points)

An individual is considered obese if s/he has a BMI of 25 or higher. Take the heights (in cm) and weights (in kg) of 10 people, and then print out the ones who are considered obese.

BMI (Body Mass Index) = weight (kg) / (height (m) * height (m))

* Notice that the height in the formula is in meter (m). 

Example runs:

Enter a height and weight: 165 56
Enter a height and weight: 176 90
Enter a height and weight: 187 60
Enter a height and weight: 155 47
Enter a height and weight: 170 75
Enter a height and weight: 173 80
Enter a height and weight: 165 50
Enter a height and weight: 182 73
Enter a height and weight: 158 48
Enter a height and weight: 170 66
-> Obesity: 2 5 6
-> Total 3 individuals are obese. 
*/

int main(void) {
  int height[10];
  int weight[10];
  int obesity[10];
  int obesity_index = 0;
  int BMI = 0;
  for (int i = 0; i<10; i++) {
    printf("Enter a height and weight: ");
    scanf("%d %d", &height[i], &weight[i]);
    BMI = weight[i] * pow(10, 4) / (height[i] * height[i]);
    if (BMI >= 25) {
      obesity[obesity_index] = i;
      obesity_index++;
    }
  }
  
  printf("Obesity: ");
  for (int i = 0; i < obesity_index; i++) {
    printf("%d ", obesity[i] + 1);
  }
  printf("\nTotal %d individuals are obese.", obesity_index);
  
  return 0;
}