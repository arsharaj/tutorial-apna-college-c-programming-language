#include <stdio.h>
#include <math.h>

float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float breadth);

int main() {
  printf("Square Area : %f \n", areaSquare(5.0));
  printf("Circle Area : %f \n", areaCircle(5.0));
  printf("Rectangle Area : %f \n", areaRectangle(5.0, 3.0));
  return 0;
}

float areaSquare(float side) {
  return pow(side, 2);
}

float areaCircle(float radius) {
  return 3.14 * pow(radius, 2);
}

float areaRectangle(float length, float breadth) {
  return length * breadth;
}