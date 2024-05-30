#include <stdio.h>

void slice(char str[], char new_str[], int n, int m);

int main() {
  char str[50], new_str[50];
  printf("Enter a string : ");
  fgets(str, 50, stdin);
  slice(str, new_str, 3, 6);
  printf("Sliced String : %s \n", new_str);
  return 0;
}

void slice(char str[], char new_str[], int n, int m) {
  char *ptr = new_str;
  for (int i = n; i <= m; i++) {
    *ptr = str[i];
    ptr++;
  }
  *ptr = '\0';
}