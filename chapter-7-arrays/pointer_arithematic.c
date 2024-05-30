#include <stdio.h>

int main() {
  int age_new = 12;
  int age_old = 22;
  int *ptr_new = &age_new;
  int *ptr_old = &age_old;
  printf("Ptr = %p \n", ptr_new);
  ptr_new++;
  printf("Ptr = %p \n", ptr_new);
  ptr_new--;
  printf("Ptr = %p \n", ptr_new);
  printf("Difference = %ld \n", ptr_new - ptr_old);
  printf("Comparision = %d \n", ptr_new == ptr_old);
  return 0;
}