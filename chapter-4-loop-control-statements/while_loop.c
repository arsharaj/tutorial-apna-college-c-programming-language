#include <stdio.h>

int main() {
  int i = 1;
  while (i <= 5) {
    printf("Hello World \n");
    i++;
  }
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  i = 0;
  while(i <= n) {
    printf("%d \n", i);
    i++;
  }
  return 0;
}