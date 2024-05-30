#include <stdio.h>

int main() {
  float length, breadth;
  printf("Enter length : ");
  scanf("%f", &length);
  printf("Enter breadth : ");
  scanf("%f", &breadth);
  printf("Perimeter of Rectangle is %f \n", 2 * (length + breadth));
  return 0;
}