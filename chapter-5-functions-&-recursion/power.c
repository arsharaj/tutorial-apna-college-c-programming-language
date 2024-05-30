#include <stdio.h>

int power(int a, int b);

int main() {
  int a, b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("%d to the power of %d is %d \n", a, b, power(a, b));
  return 0;
}

int power(int a, int b) {
  if (b == 1) {
    return a;
  }
  return a * power(a, b - 1);
}