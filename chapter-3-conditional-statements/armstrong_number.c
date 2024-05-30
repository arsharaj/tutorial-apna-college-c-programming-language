#include <stdio.h>
#include <math.h>

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  int temp = num, sum = 0;
  while (temp > 0) {
    sum += pow((temp % 10), 3);
    temp /= 10;
  }
  if (num == sum) {
    printf("%d is an Armstrong Number \n", num);
  } else {
    printf("%d is not an Armstrong Number \n", num);
  }
  return 0;
}