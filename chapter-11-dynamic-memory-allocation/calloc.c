#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr = (int *) calloc(5, sizeof(int));
  for (int i = 0; i < 5; i++) {
    printf("%d \n", ptr[i]);
  }
  free(ptr);
  return 0;
}