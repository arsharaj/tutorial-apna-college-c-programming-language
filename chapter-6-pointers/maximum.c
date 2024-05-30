#include <stdio.h>

int findMax(int *a, int *b);

int main() {
  int a, b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("Maximum = %d \n", findMax(&a, &b));
  return 0;
}

int findMax(int *a, int *b) {
  if (*a > *b) {
    return *a;
  } else {
    return *b;
  }
}