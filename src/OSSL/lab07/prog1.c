#include <stdio.h>
#include <string.h>

int main(){
	char str1[256];
	char str2[256];

	printf("Enter a string: ");
	scanf("%s", str1);
	printf("Enter another string: ");
	scanf("%s", str2);

	if(!strcmp(str1, str2))
		printf("Both strings are the same.\n");
	else
		printf("Two strings are different.\n");

	return 0;
}
