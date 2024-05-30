#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int *ptr = (int *) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    printf("Enter %dth no : ", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%d \n", ptr[i]);
  }
  free(ptr);
  return 0;
}