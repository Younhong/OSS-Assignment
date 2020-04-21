#include <stdio.h>
#include <limits.h>

/*
Problem 4

Given a 32-bit signed integer, reverse digits of an integer. 

Example runs: 

Enter a number: 123
-> Reversed: 321

Enter a number: -123
-> Reversed: -321

Enter a number: 120
-> Reversed: 21

Enter a number: 5001
-> Reversed: 1005

Enter a number: 1000000009
-> Reversed: 9000000001
*/

int main(void){
	long signed int new_number = 0;
	long signed int n = 0;
	int count = 0;
	int temp[100];
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n != 0) {
	  temp[count] = n % 10;
	  n /= 10;
	  count++;
	}
	
	printf("Reversed: ");
	for (int i = 0; i < count; i++) {
	  new_number = new_number * 10 + temp[i];
	}
	
	printf("%ld", new_number);
  
  return 0;
}