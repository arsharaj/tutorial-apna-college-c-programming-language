#include <stdio.h>
#include <math.h>

int main() {
  int a = 1, b = 2;
  int sum = a + b;
  int multiply = a * b;
  int power = pow(2, 10);
  printf("Power is %d \n", power);
  printf("16 mod 10 = %d \n", 16 % 10);
  printf("-8 mod 3 = %d \n", -8 % 3);
  printf("2 * 2 = %d \n", 2 * 2);
  printf("2.0 * 2 = %f \n", 2.0 * 2);
  printf("2.0 * 2.0 = %f \n", 2.0 * 2.0);
  printf("2 / 3 = %d \n", 2 / 3);
  printf("2.0 / 3 = %f \n", 2.0 / 3);
  int c = 1.999999;
  printf("c = %d \n", c);
  printf("4 + 9 * 10 = %d \n", 4 + 9 * 10);
  printf("4 * 3 / 6 * 2 = %d \n", 4 + 3 / 6 * 2);
  printf("5 * 2 - 2 * 3 = %d \n", 5 * 2 - 2 * 3);
  printf("5 * 2 / 2 * 3 = %d \n", 5 * 2 / 2 * 3);
  printf("5 * (2 / 2) * 3 = %d \n", 5 * (2 / 2) * 3);
  printf("5 + 2 / 2 * 3 = %d \n", 5 + 2 / 2 * 3);
  return 0;
}