#include <stdio.h>

int findFactorial(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("Factorial is %d \n", findFactorial(n));
  return 0;
}

int findFactorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * findFactorial(n - 1);
}