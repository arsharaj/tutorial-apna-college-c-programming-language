#include <stdio.h>

void findSumProductAverage(float a, float b, float *sum, float *product, float *average);

int main() {
  float a, b, sum, product, average;
  printf("Enter a : ");
  scanf("%f", &a);
  printf("Enter b : ");
  scanf("%f", &b);
  findSumProductAverage(a, b, &sum, &product, &average);
  printf("Sum = %f \n", sum);
  printf("Product = %f \n", product);
  printf("Average = %f \n", average);
  return 0;
}

void findSumProductAverage(float a, float b, float *sum, float *product, float *average) {
  *sum = a + b;
  *product = a * b;
  *average = (a + b) / 2;
}