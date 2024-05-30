#include <stdio.h>

void printFibonacci(int n);
int findFibonacci(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printFibonacci(n);
  return 0;
}

void printFibonacci(int n) {
  printf("Fibonacci Sequence : ");
  for (int i = 0; i < n; i++) {
    printf("%d ", findFibonacci(i));
  }
  printf("\n");
}

int findFibonacci(int n) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return findFibonacci(n - 1) + findFibonacci(n - 2);
}