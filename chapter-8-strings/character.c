#include <stdio.h>

int findChar(char str[], char key);

int main() {
  char str[50];
  printf("Enter a string : ");
  fgets(str, 50, stdin);
  printf("Present : %d \n", findChar(str, 'a'));
  return 0;
}

int findChar(char str[], char key) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == key) {
      return 1;
    }
  }
  return 0;
}