#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a, b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  swap(&a, &b);
  printf("a = %d  b = %d \n", a, b);
  return 0;
}

void swap(int *a, int *b) {
  *a += *b;
  *b = *a - *b;
  *a -= *b;
}