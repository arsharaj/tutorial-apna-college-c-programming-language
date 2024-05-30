#include <stdio.h>

int main() {
  char str[50], ch;
  int i = 0;
  printf("Enter a string : ");
  while (ch != '\n') {
    scanf("%c", &ch);
    str[i] = ch;
    i++;
  }
  str[i] = '\0';
  printf("String : %s ", str);
  return 0;
}