#include <stdio.h>

int main() {
  int age;
  printf("Enter age : ");
  scanf("%d", &age);
  if (age >= 18) {
    printf("Adult \n");
  } else if (age >= 13 && age < 18) {
    printf("Teenager \n");
  } else {
    printf("Child \n");
  }
  age >= 18 ? printf("Adult \n") : printf("Not Adult \n");  // Ternary Operator
  return 0;
}