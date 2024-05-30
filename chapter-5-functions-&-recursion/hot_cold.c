#include <stdio.h>

void bodyStatus(int temp);

int main() {
  float temp;
  printf("Enter temperature (in Celsius) : ");
  scanf("%f", &temp);
  bodyStatus(temp);
  return 0;
}

void bodyStatus(int temp) {
  if (temp <= 37) {
    printf("Cold \n");
  } else {
    printf("Hot \n");
  }
}