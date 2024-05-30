#include <stdio.h>

int findLength(char *name);

int main() {
  char name[50];
  printf("Enter your name : ");
  fgets(name, 50, stdin);
  printf("Your name has %d characters. \n", findLength(name));
  return 0;
}

int findLength(char *name) {
  int length = 0;
  for (char *ptr = name; *ptr != '\0'; *ptr++) {
    if (*ptr == ' ' || *ptr == '\n') {
      continue;
    }
    length++;
  }
  return length;
}