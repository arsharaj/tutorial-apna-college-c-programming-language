#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr = (int *) calloc(5, sizeof(int));
  int j = 0;
  for(int i = 1; i <= 10; i++) {
    if (i % 2 != 0) {
      ptr[j] = i;
      j++;
    }
  }
  printf("Odd No : ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
  ptr = realloc(ptr, 6);
  j = 0;
  for(int i = 1; i <= 12; i++) {
    if (i % 2 == 0) {
      ptr[j] = i;
      j++;
    }
  }
  printf("Even No : ");
  for(int i = 0; i < 6; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");
  free(ptr);
  return 0;
}