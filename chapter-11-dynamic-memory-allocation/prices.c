#include <stdio.h>
#include <stdlib.h>

int main() {
  float *prices = (float *) malloc(5 * sizeof(float));
  prices[0] = 1.0;
  prices[1] = 23.4;
  prices[2] = 42.6;
  prices[3] = 34.2;
  prices[4] = 73.2;
  for (int i = 0; i < 5; i++) {
    printf("%f \n", prices[i]);
  }
  return 0;
}