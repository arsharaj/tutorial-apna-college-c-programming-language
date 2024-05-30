#include <stdio.h>

int main() {
  char first_name[] = {'A', 'r', 's', 'h', 'a', 'r', 'a', 'j', '\0'};
  char last_name[] = "Chauhan";
  char name[50];
  printf("Enter your name : ");
  scanf("%s", name);
  printf("My name is %s. \n", name);
  char *str = "Hello World";
  puts(str);
  str = "Test String";
  puts(str);
  return 0;
}