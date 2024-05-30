#include <stdio.h>

void printTable(int n);

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printTable(num);
  return 0;
}

void printTable(int n) {
  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
}