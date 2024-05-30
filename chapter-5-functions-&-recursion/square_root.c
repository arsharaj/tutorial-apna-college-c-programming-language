#include <stdio.h>

int findSquareRoot(int num);

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("Square Root is %d \n", findSquareRoot(num));
  return 0;
}

int findSquareRoot(int num) {
  for (int i = 1; i <= num; i++) {
    if (i * i == num) {
      return i;
    }
  }
  return -1;
}