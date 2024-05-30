#include <stdio.h>

int main() {
  int aadhaar[5];
  int *ptr = aadhaar;
  for (int i = 1; i <= 5; i++) {
    printf("Enter Aadhaar No. %d = ", i);
    scanf("%d", ptr);
    ptr++;
  }
  ptr = aadhaar;
  for (int i = 1; i <= 5; i++) {
    printf("Aadhaar No. %d = %d \n", i, *ptr);
    ptr++;
  }
  return 0;
}