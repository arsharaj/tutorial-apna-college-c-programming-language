#include <stdio.h>

int main() {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  if (num >= 1) {
    printf("Natural Number \n");
  } else {
    printf("Not a Natural Number \n");
  }
  return 0;
}