#include <stdio.h>
#include <string.h>

char* reverse_string(char* str);

/*
Problem 10 (5 points)

Write a function that takes a string (i.e., a pointer to a character array) and flips the order of the character in the string. Then complete the main function such that it takes a string from the user and prints out a reverse of the user input on the screen.

Use the following function prototype:
char * reverse_string(char * str); 

Example runs:
Enter a string: Hello World!
-> Reverse string: !dlroW olleH 

Enter a string: Have a nice day! 
-> Reverse string: !yad ecin a evaH

Enter a string: God loves you! 
-> Reverse string: !uoy sevol doG

Enter a string: Good Job! 
-> Reverse string: !boJ dooG

Enter a string: What a wonderful day!
-> Reverse string: !yad lufrednow a tahW 
*/

int main(void){
	char str[128];
	printf("Enter a string: ");
	fgets(str, 128, stdin);

	printf("-> Reverse string: %s", reverse_string(str));
  
  return 0;
}

char* reverse_string(char* str){
  char temp = ' ';
  for (int i = 0; i < strlen(str) / 2; i++) {
    temp = str[i];
    str[i] = str[strlen(str) - i - 2];
    str[strlen(str) - i-2] = temp;
  }
  
	return str;
}