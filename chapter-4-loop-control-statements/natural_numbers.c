#include <stdio.h>

int main() {
  int n, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &n);
  while (n >= 1) {
    printf("%d \n", n);
    sum += n;
    n--;
  }
  printf("Sum = %d \n", sum);
  return 0;
}