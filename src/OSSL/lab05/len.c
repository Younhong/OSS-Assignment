/*
len: a simple character counting program
Charmgil Hong
*/
#include <stdio.h>
#include <string.h>

int main(void){
  char input[2048];

  while(fgets(input, sizeof(input), stdin) != NULL){
    // Receive a user input
    if(input[strlen(input) - 1] == '\n')
      input[strlen(input) - 1] = 0;

    // Terminal condition
    if(strcmp(input, "quit") == 0){
      break;
    }

    // Compute and print the length
    int len = strlen(input);
    printf("%d\n", len);
  }

  // Terminating
  printf("(bye)\n");
  return 0;
}
