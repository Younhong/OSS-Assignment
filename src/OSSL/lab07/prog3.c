nclude <stdio.h>
#include <stdlib.h>

int main(){
	for(int i = 2; i < 5; i++)
		for(int j = i; j < 7; j++)
			printf("Random(%d-%d+1)=%ld\n", j, i, random()%(j-i+1));
	return 0;
}
