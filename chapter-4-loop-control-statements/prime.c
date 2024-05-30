#include <stdio.h>

int main() {
  int num, prime = 1;
  printf("Enter a number : ");
  scanf("%d", &num);
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      prime = 0;
    }
  }
  if (prime) {
    printf("%d is prime \n", num);
  } else {
    printf("%d is not prime \n", num);
  }
  return 0;
}