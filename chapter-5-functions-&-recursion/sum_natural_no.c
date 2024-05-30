#include <stdio.h>

int findSum(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("Sum is %d \n", findSum(n));
  return 0;
}

int findSum(int n) {
  if (n == 1) {
    return 1;
  }
  return n + findSum(n - 1);
}