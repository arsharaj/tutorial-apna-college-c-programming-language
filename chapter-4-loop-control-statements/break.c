#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      break;
    }
    printf("%d \n", i);
  }
  return 0;
}