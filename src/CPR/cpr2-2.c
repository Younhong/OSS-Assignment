#include <stdio.h>

/*
Problem 2

Given an integer number n, return the difference between the product of its digits and the sum of its digits.

* Note: 1 <= n <= 10^5

Enter a number: 234
Prod - sum = 15        // because Product of digits = 2 * 3 * 4 = 24
                                                   Sum of digits = 2 + 3 + 4 = 9
                                                    24 - 9 = 15

Enter a number: 4421
Prod - sum = 21        // because Product of digits = 4 * 4 * 2 * 1 = 32
                                                   Sum of digits = 4 + 4 + 2 + 1 = 11
                                                    32 - 11 = 21 

 
Enter a number: 3369 
Prod - sum = 465        // because Product of digits = 3 * 3 * 6 * 9 = 486
                                 Sum of digits = 3 + 3 +  6 + 9 = 21
                                 486 - 21 = 465

Enter a number: 9682 
Prod - sum = 839        // because Product of digits = 9 * 6 * 8 * 2 = 864
                                 Sum of digits = 9 + 6 +  8 + 2 = 25
                                 864 - 25 = 839

Enter a number: 9127 
Prod - sum = 107        // because Product of digits = 9 * 1 * 2 * 7 = 126
                                 Sum of digits = 9 + 1 +  2 + 7 = 19
                                 126 - 19 = 107

Example runs:

Enter a number: 234
Prod - sum = 15

Enter a number: 4421
Prod - sum = 21

Enter a number: 3369 
Prod - sum = 465       

Enter a number: 9682 
Prod - sum = 839 
      
Enter a number: 9127 
Prod - sum = 107     
*/

int main(void){
	int number = 0;
	int product = 1;
	int sum = 0;
	int temp[100];
	int count = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	while (number > 0) {
	  temp[count] = number % 10;
	  number /= 10;
	  count++;
	}
	
	for (int i = 0; i < count; i++) {
	  product = product * temp[i];
	  sum = sum + temp[i];
	}
	
	printf("Prod - sum = %d", product - sum);
	
  return 0;
}