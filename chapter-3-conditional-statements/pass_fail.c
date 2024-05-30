#include <stdio.h>

int main() {
  int marks;
  printf("Enter marks (0 - 100) : ");
  scanf("%d", &marks);
  if (marks > 30 && marks <= 100) {
    printf("Pass \n");
  } else if (marks >= 0 && marks <= 30) {
    printf("Fail \n");
  } else {
    printf("Wrong Marks \n");
  }
  marks <= 30 ? printf("Fail \n") : printf("Pass \n");
  return 0;
}