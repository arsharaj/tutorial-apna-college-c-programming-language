#include <stdio.h>

float findPercentage(int a, int b, int c);

int main() {
  int science, math, sanskrit;
  printf("Enter Science Marks : ");
  scanf("%d", &science);
  printf("Enter Math Marks : ");
  scanf("%d", &math);
  printf("Enter Sanskrit Marks : ");
  scanf("%d", &sanskrit);
  printf("Percentage : %f \n", findPercentage(science, math, sanskrit));
  return 0;
}

float findPercentage(int a, int b, int c) {
  return (a + b + c) / 3.0;
}