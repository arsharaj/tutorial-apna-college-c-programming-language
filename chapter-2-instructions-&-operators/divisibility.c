#include <stdio.h>

int main() {
  int num;
  printf("Enter number : ");
  scanf("%d", &num);
  printf("Divisibility with 2 = %d \n", num % 2 == 0);
  return 0;
}