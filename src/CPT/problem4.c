#include <stdio.h>
#include <string.h>

// function declaration
int count_occurrences(char *str1, char *str2);

/*
Problem 4

Searching List of Characters
Consider function count_occurrences() that takes two strings, str1 and str2, where
  str1 is a unique list of alphabetic characters
  str2 is a regular string with no special constraints
and counts all occurrences of individual characters in str1 from str2. For instances,
- count_occurrences("Aj", "Apple jam") returns 2
- count_occurrences("odyAU", "handong university") returns 3
- count_occurrences("pts", "pittsburgh") returns 4

* Notice that count_occurrences() is case-sensitive.

Your task is to complete function count_occurrences() and make sure the provided main function prints out the correct results.

Example_runs:

(Test #1)
count_occurrences("Aj", "Apple jam") = 2

(Test #2)
count_occurrences("odyAU", "handong university") = 3

(Test #3)
count_occurrences("cp", "Practical C Programming") = 2

(Test #4)
count_occurrences("temTEM", "The highest mountain in Korea") = 7
*/

int main(void){
  
  // Test case #1
  printf("(Test #1)\n");
  printf("count_occurrences(\"Aj\", \"Apple jam\") = %d\n", 
                          count_occurrences("Aj", "Apple jam"));
                          
  // Test case #2
  printf("\n(Test #2)\n");
  printf("count_occurrences(\"odyAU\", \"handong university\") = %d\n", 
                          count_occurrences("odyAU", "handong university"));
                          
  // Test case #3
  printf("\n(Test #3)\n");
  printf("count_occurrences(\"cp\", \"Practical C Programming\") = %d\n", 
                          count_occurrences("cp", "Practical C Programming"));
                          
  // Test case #4
  printf("\n(Test #4)\n");
  printf("count_occurrences(\"temTEM\", \"The highest mountain in Korea\") = %d\n", 
                          count_occurrences("temTEM", "The highest mountain in Korea"));
  
  return 0;
}

// function definition
int count_occurrences(char *str1, char *str2){
  
  int count  = 0;
  for (int i = 0; i < strlen(str1); i++) {
    for (int j = 0; j < strlen(str2); j++) {
      if (str1[i] == str2[j]) {
        count++;
      }
    }
  }
        
  return count;
}