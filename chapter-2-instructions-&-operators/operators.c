#include <stdio.h>

int main() {
  printf("4 == 4 = %d \n", 4 == 4);
  printf("4 == 3 = %d \n", 4 == 3);
  printf("4 > 3 = %d \n", 4 > 3);
  printf("4 != 4 = %d \n", 4 != 4);
  printf("4 != 3 = %d \n", 4 != 3);
  printf("4 > 3 && 5 > 2 = %d \n", 4 > 3 && 5 < 2);
  printf("4 > 3 || 5 > 2 = %d \n", 4 > 3 || 5 < 2);
  printf("!(3 > 4) = %d \n", !(3 > 4));
  int a = 1, b = 4;
  a += b;
  a -= b;
  a *= b;
  printf("a = %d \n", a);
  return 0;
}