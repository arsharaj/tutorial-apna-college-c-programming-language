#include <stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("Students.txt", "w");
  if (fptr == NULL) {
    printf("File does not exist. \n");
  } else {
    char name[50];
    int roll_no;
    float cgpa;
    printf("Enter Student Name : ");
    scanf("%s", name);
    printf("Enter Student Roll No : ");
    scanf("%d", &roll_no);
    printf("Enter Student CGPA : ");
    scanf("%f", &cgpa);
    fprintf(fptr, "Name : %s \n", name);
    fprintf(fptr, "Roll No : %d \n", roll_no);
    fprintf(fptr, "CGPA : %f \n", cgpa);
    fclose(fptr);
  }
  return 0;
}