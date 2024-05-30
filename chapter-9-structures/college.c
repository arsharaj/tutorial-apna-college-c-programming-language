#include <stdio.h>

struct Students {
  char name[50];
  int roll_no;
  float cgpa;
};

struct Teachers {
  char name[50];
  char subject[50]; 
};

void printStudents(struct Students students[]);
void printTeachers(struct Teachers teachers[]);

int main() {
  struct Students students[] = {{"Raju", 1, 4.0}, {"Shyam", 4, 3.5}, {"John", 2, 7.2}};
  struct Teachers teachers[] = {{"Rajesh", "Hindi"}, {"Shivam", "Maths"}, {"Shastri", "Sanskrit"}};
  printStudents(students);
  printTeachers(teachers);
  return 0;
}

void printStudents(struct Students students[]) {
  for (int i = 0; i < 3; i++) {
    printf("Name : %s, Roll No : %d, CGPA : %f \n", students[i].name, students[i].roll_no, students[i].cgpa);
  }
}


void printTeachers(struct Teachers teachers[]) {
  for (int i = 0; i < 3; i++) {
    printf("Name : %s, Subjects : %s \n", teachers[i].name, teachers[i].subject);
  }
}