#include <stdio.h>

int main() {
  char digit;
  printf("Enter a character : ");
  scanf("%c", &digit);
  printf("Is Digit = %d \n", digit >= '0' && digit <= '9');
  return 0;
}