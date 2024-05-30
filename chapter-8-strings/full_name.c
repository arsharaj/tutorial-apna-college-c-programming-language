#include <stdio.h>

int main() {
  char first_name[20];
  printf("Enter First Name : ");
  scanf("%s\n", first_name);
  printf("First name is %s. \n", first_name);
  char name[50];
  fgets(name, 50, stdin);
  puts(name);
  return 0;
}