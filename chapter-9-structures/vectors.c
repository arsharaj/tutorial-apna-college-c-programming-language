#include <stdio.h>

struct Vector {
  int x;
  int y;
};

int main() {
  struct Vector vector[2] = {{5, 10}, {3, 10}}, sum;
  sum.x = vector[0].x + vector[1].x;
  sum.y = vector[0].y + vector[1].y;
  printf("Sum x : %d, Sum y : %d \n", sum.x, sum.y);
  return 0;
}