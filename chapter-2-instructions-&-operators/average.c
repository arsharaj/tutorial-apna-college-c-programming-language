#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter a : ");
  scanf("%f", &a);
  printf("Enter b : ");
  scanf("%f", &b);
  printf("Enter c : ");
  scanf("%f", &c);
  printf("Average = %f \n", (a + b + c) / 3);
  return 0;
}