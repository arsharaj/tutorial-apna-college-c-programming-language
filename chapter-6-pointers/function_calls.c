#include <stdio.h>

void square(int n);
void squareReference(int *n);

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  square(num);
  printf("Number = %d \n", num);
  squareReference(&num);
  printf("Number = %d \n", num);
  return 0;
}

void square(int n) {
  n *= n;
  printf("Square Area = %d \n", n);
}

void squareReference(int *n) {
  *n *= *n;
  printf("Square Area = %d \n", *n);
}