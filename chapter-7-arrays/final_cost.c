#include <stdio.h>

int main() {
  float items[3];
  printf("Enter Item 1 : ");
  scanf("%f", &items[0]);
  printf("Enter Item 2 : ");
  scanf("%f", &items[1]);
  printf("Enter Item 3 : ");
  scanf("%f", &items[2]);
  printf("Final Cost = %f \n", (items[0] + items[1] + items[2])+ (items[0] + items[1] + items[2]) * 0.18);
  return 0;
}