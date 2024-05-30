#include <stdio.h>
#include <string.h>

int main() {
  char name[] = "Arsharaj Chauhan";
  printf("Length is %ld \n", strlen(name));
  char old_str[] = "String";
  char new_str[] = "Hello";
  strcpy(new_str, old_str);
  printf("New String : %s \n", new_str);
  char first_name[] = "Arsharaj ";
  char last_name[] = "Chauhan";
  printf("Name is %s \n", strcat(first_name, last_name));
  char first[] = "Banana";
  char second[] = "Apple";
  printf("First == Second = %d \n", strcmp(first, second));
  return 0;
}