#include <stdio.h>

float convertCelsius(float celsius);

int main() {
  float celsius;
  printf("Enter Celsius Temperature : ");
  scanf("%f", &celsius);
  printf("Fahrenheit Temperature : %f \n", convertCelsius(celsius));
  return 0;
}

float convertCelsius(float celsius) {
  return (celsius * 9 / 5) + 32;
}

