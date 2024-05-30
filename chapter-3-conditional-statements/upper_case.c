#include <stdio.h>

int main() {
  char upper;
  printf("Enter a character : ");
  scanf("%c", &upper);
  if (upper >= 'A' && upper <= 'Z') {
    printf("Upper Case \n");
  } else {
    printf("Not Upper Case \n");
  }
  return 0;
}