#include <stdio.h>

/*
Problem 3

Computing Factorials
Write a recursive function factorial(n) that computes:
  factorial(n) = n!
               = n * (n-1) * (n-2) * ... * 2 * 1

You may want to consider the following recurrence relations:
  factorial(n) = 1                    (if n == 1)
                n * factorial(n-1)   (if n > 1)

Example runs:

Enter a number: 3
-> 3! = 6

Enter a number: 5
-> 5! = 120

Enter a number: 7
-> 7! = 5040

Enter a number: 10
-> 10! = 3628800

Enter a number: 2 
-> 2! = 2

Enter a number: 4 
-> 4! = 24
*/

long long factorial(int n){
	int result = 1;
	if (n==1){
	  return 1;
	}
	else {
	  return n * factorial(n-1);
	}
}

int main(void){
	int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("-> %d! = %lld\n", n, factorial(n));
  
  return 0;
}