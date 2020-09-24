#include <stdio.h>
#include <string.h>

int main(){
	char *str1 = "hello";
	char str2[6];
	char str3[6];

	strcpy(str2, str1);
	strcpy(str3, str1);
	// strcpy(str1, str2);
	// strcpy(str1, str3);

	printf("str1 = \"%s\"\n", str1);
	printf("str2 = \"%s\"\n", str2);
	printf("str3 = \"%s\"\n", str3);

	return 0;
}
