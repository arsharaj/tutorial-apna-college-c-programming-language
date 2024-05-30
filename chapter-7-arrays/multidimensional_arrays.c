#include <stdio.h>

int main() {
  int marks[2][3] = {{90, 89, 78}, {78, 96, 85}};
  printf("Student 1 : %d  %d  %d \n", marks[0][0], marks[0][1], marks[0][2]);
  printf("Student 2 : %d  %d  %d \n", marks[1][0], marks[1][1], marks[1][2]);
  return 0;
}