#include <stdio.h>

int main() {
  int num;
  printf("Enter number : ");
  scanf("%d", &num);
  printf("Even = %d \n", num % 2 == 0);
  printf("Odd = %d \n", num % 2 == 1);
  return 0;
}