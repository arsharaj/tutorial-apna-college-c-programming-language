#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Integers.txt", "r");
  if (fptr == NULL) {
    printf("File does not exist. \n");
  } else {
    int n;
    for (int i = 1; i <= 5; i++) {
      fscanf(fptr, "%d", &n);
      printf("%d ", n);
    }
    printf("\n");
    fclose(fptr);
  }
  return 0;
}