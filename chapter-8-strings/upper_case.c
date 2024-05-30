#include <stdio.h>

void toUpper(char *str);

int main() {
  char str[50];
  printf("Enter a string : ");
  fgets(str, 50, stdin);
  toUpper(str);
  printf("Upper Case : ");
  fputs(str, stdout);
  return 0;
}

void toUpper(char *str) {
  char *ptr = str;
  while (*ptr != '\0') {
    if (*ptr >= 'a' && *ptr <= 'z') {
      *ptr = *ptr - ('a' - 'A');
    }
    ptr++;
  }
}