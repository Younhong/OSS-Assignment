#include <stdio.h>
#include <string.h>
#include <math.h>

/*
Problem 5

You have given a set of letters. Return the number of possible non-empty sequences of letters you can make.

* Example 1:
Input: "AAB"
Output: 8
Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

* Example 2:
Input: "AAABBC"
Output: 188 

Example runs: 

Enter a string with ALL CAPITAL letters: AAB
-> 8

Enter a string with ALL CAPITAL letters: AAABBC
-> 188

Enter a string with ALL CAPITAL letters: ABCD
-> 64

Enter a string with ALL CAPITAL letters: AAABBBCCC
-> 5247

Enter a string with ALL CAPITAL letters: ABCDEFG
-> 13699
*/

int permutation(int n, int i);
int solution(char* letters);
int factorial(int n);
int computation(int x, int y);
int duplicate_letter(char* letters, int n, int temp[], int count);
int cal(int n, int num_dis_letter, int temp[]);
int compute_last (int n, int num_dis_letter, int temp[]);

int solution(char* letters){
	int n = strlen(letters);
	int temp[10] = {1, 1, 1};
	int temp2[10];
	int result = 0;
	int num_dis_letter = 1;
	int didChange = 0;
	int count = 0;
	
	for (int i = 0; i < n; i++) {
	  for (int j = i+1; j < n; j++) {
	    if (i !=j && letters[i] == letters[j]) {
	      temp[num_dis_letter-1]++;
	      temp2[num_dis_letter-1] = letters[i];
	      didChange = 1;
	      count++;
	      break;
	    }
	    else if (didChange == 1) {
	      num_dis_letter++;
	      didChange = 0;
	    }
	  }
	}
	
	if (count == 0) {
	  for (int i = 0; i < n; i++) {
	    result = result + permutation(n, i+1);
  	}
	}
	else {
	  result = duplicate_letter(letters, n, temp, count);
	}

	return result;
}

int duplicate_letter(char* letters, int n, int temp[], int num_dis_letter) {

  if (n == 1) return num_dis_letter + 1;
  else if (n == strlen(letters)) 
    return duplicate_letter(letters, n-1, temp, num_dis_letter) 
      + compute_last(n, num_dis_letter, temp);
  else 
    return duplicate_letter(letters, n-1, temp, num_dis_letter)
      + cal(n, num_dis_letter, temp);
}

// selecting element from 2~(n-1)
int cal(int n, int num_dis_letter, int temp[]) {
  int key1, key2, key3;
  if (temp[2] == 1) {
    key2 = 2;
    key1 = n - key2; 
  } 
  return factorial(n+1) / (factorial(key2) * factorial(key1));
}

// selecting all element
int compute_last (int n, int num_dis_letter, int temp[]) {
  int div = 1;
  for (int i = 0; i < num_dis_letter; i++) {
    div = div * factorial(temp[i]);
  }
  
  return factorial(n) / div;
}

// nCr
int computation(int x, int y) {
  return  permutation(x, y) / factorial(y);
}

// nPr
int permutation(int n, int i) {
  int p = 1;
  
  for (int k = 0; k < i; k++) {
    p = p * (n-k);
  }
  
  return p;
}

// n!
int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  
  return result;
}

int main(void){
	char letters[20];
  printf("Enter a string with ALL CAPITAL letters: ");
  scanf("%s", letters);
  
  printf("-> %d\n", solution(letters));
  
  return 0;
}