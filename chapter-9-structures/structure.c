#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int roll_no;
  float cgpa;
};

int main() {
  struct Student arsh = {"Arsharaj", 123, 7.9};
  strcpy(arsh.name, "Arsharaj Chauhan");
  arsh.roll_no = 11;
  arsh.cgpa = 9.5;
  printf("Name : %s  Roll No : %d  CGPA : %f \n", arsh.name, arsh.roll_no, arsh.cgpa);
  struct Student cse[10];
  cse[0].roll_no = 1;
  cse[0].cgpa = 9.2;
  strcpy(cse[0].name, "John Doe");
  printf("Name : %s  Roll No : %d  CGPA : %f \n", cse[0].name, cse[0].roll_no, cse[0].cgpa);
  return 0;
}