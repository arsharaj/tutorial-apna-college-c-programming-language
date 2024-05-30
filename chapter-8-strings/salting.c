#include <stdio.h>
#include <string.h>

int main() {
  char password[50];
  char new_password[50];
  printf("Enter a password : ");
  scanf("%s", password);
  strcpy(new_password, password);
  strcat(new_password, "123");
  printf("Password : %s \n", new_password);
  return 0;
}