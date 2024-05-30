#include <stdio.h>

int main() {
  int range;
  printf("Enter a range (1 - n) : ");
  scanf("%d", &range);
  for (int i = 1; i <= range; i++) {
    int prime = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        prime = 0;
      }
    }
    if (prime) {
      printf("%d \n", i);
    }
  }
  return 0;
}