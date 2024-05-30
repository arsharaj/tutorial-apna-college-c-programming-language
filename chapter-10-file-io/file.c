#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Sample.txt", "r");
  if (fptr == NULL) {
    printf("File does not exist. \n");
  } else {
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character = %c \n", ch);
    fclose(fptr);
  }
  return 0;
}