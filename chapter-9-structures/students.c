#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int roll_no;
  float cgpa;
};

void printData(struct Student data);

int main() {
  struct Student arsh, aman, ravi;
  strcpy(arsh.name, "Arsharaj Chauhan");
  arsh.roll_no = 1;
  arsh.cgpa = 9.6;
  strcpy(aman.name, "Aman Sharma");
  aman.roll_no = 2;
  aman.cgpa = 8.0;
  strcpy(ravi.name, "Ravi Aggarwal");
  ravi.roll_no = 3;
  ravi.cgpa = 5.2;
  printData(arsh);
  printData(aman);
  printData(ravi);
  return 0;
}

void printData(struct Student data) {
  printf("Name : %s  Roll No : %d  CGPA : %f \n", data.name, data.roll_no, data.cgpa);
}