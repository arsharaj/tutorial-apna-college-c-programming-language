#include <stdio.h>

int main() {
  int age = 22;
  int *ptr = &age;
  int _age = *ptr;
  printf("Age = %d \n", _age);
  printf("Address of age = %p \n", &age);
  printf("Value at ptr = %p \n", ptr);
  printf("Address of ptr = %p \n", &ptr);
  printf("Value at age = %d \n", *ptr);
  float price = 100.00;
  float *fptr = &price;
  float **fpptr = &fptr;
  printf("Value at Price = %f \n", **fpptr);
  return 0;
}