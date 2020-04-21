#include <stdio.h>
#include <string.h>

/*
Write a program that takes a sentence (string) and count the number of vowels and consonants in the sentence.
Note that you may want to use the fgets() function to acquire strings with spaces.

E.g.,
Enter a sentence: hello world
#vowels: 3
#consonants: 7

Enter a sentence: English scientist Tim Berners-Lee invented the World Wide Web in 1989
#vowels: 19
#consonants: 35

Enter a sentence: Linus Torvalds created Linux when he was a student at the University of Helsinki studying computer science
#vowels: 33
#consonants: 57
*/

int main(void){
  char sentence[128];
  int n_vowels = 0, n_consonants = 0;
  
  printf("Enter a sentence: ");
  fgets(sentence, 128, stdin);
  
  for (int i = 0; i < strlen(sentence) - 1; i++) {
    if ((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)) {
      if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i'|| 
        sentence[i] == 'o'|| sentence[i] == 'u'|| sentence[i] == 'A'|| 
        sentence[i] == 'E'|| sentence[i] == 'I'|| sentence[i] == 'O'|| sentence[i] == 'U') {
        n_vowels++;
      }
      else {
        n_consonants++;
      }
    }
  }
  
  printf("#vowels: %d\n#consonants: %d\n", n_vowels, n_consonants);
  
  return 0;
}