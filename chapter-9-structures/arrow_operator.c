#include <stdio.h>

struct Student {
  char name[50];
  int roll_no;
  float cgpa;
};

int main() {
  struct Student arsh = {"Arsharaj Chauhan", 1, 9.3};
  struct Student *ptr = &arsh;
  printf("Name : %s \n", ptr -> name);
  printf("Roll No : %d \n", ptr -> roll_no);
  printf("CGPA : %f \n", ptr -> cgpa);
  return 0;
}