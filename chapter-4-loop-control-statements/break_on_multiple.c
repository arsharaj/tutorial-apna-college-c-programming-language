#include <stdio.h>

int main() {
  int num;
  do {
    printf("Enter a number : ");
    scanf("%d", &num);
    if (num % 7 == 0) {
      break;
    }
  } while (1);
  return 0;
}