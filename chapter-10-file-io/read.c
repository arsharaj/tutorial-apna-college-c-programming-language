#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Sample.txt", "r");
  if (fptr == NULL) {
    printf("File does not exist. \n");
  } else {
    char ch = fgetc(fptr);
    while (ch != EOF) {
      printf("%c", ch);
      ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
  }
  return 0;
}