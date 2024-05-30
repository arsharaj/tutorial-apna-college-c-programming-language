#include <stdio.h>
#include <math.h>

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("Square of %d is %f \n", num, pow(num, 2));
  return 0;
}