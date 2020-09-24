#include <stdio.h>
#include <string.h>

int main(int argc, char argv[]) {
    char input[2048];
    char exit[4] = "quit";
    
    fgets(input, 2048, stdin);
    while (strncmp(input, exit, strlen(exit)-1) != 0) {
        printf("%lu\n", strlen(input)-1);
        fgets(input, 2048, stdin);
    }
    printf("(bye)\n");

    return 0;
}
