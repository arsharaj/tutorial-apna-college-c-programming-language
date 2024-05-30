#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Odds.txt", "w");
  if (fptr == NULL) {
    printf("File does not exist. \n");
  } else {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) {
        fprintf(fptr, "%d ", i);
      }
    }
    fclose(fptr);
  }
  return 0;
}