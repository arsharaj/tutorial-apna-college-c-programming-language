#include <stdio.h>

int main() {
  char first_name[] = "Arsharaj";
  char last_name[] = "Chauhan";
  printf("First Name : ");
  for (char *ptr = first_name; *ptr != '\0'; ptr++) {
    printf("%c", *ptr);
  }
  printf("\n");
  printf("Last Name : ");
  for (char *ptr = last_name; *ptr != '\0'; ptr++) {
    printf("%c", *ptr);
  }
  printf("\n");
  return 0;
}