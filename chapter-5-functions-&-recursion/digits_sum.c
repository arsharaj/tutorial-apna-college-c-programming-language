#include <stdio.h>

int findSum(int n);

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("Sum is %d \n", findSum(num));
  return 0;
}

int findSum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}