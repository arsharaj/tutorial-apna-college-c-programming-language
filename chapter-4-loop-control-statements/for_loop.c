#include <stdio.h>

int main() {
  for (int i = 1; i <= 5; i = i + 1) {
    printf("Hello World \n");
  }
  for (int i = 1; i <= 10; i = i + 1) {
    printf("%d \n", i);
  }
  for (int i = 10; i >= 1; i = i - 1) {
    printf("%d \n", i);
  }
  for (int i = 0; i <= 10; i++) {
    printf("%d \n", i);
  }
  for (float i = 1.0; i <= 5.0; i++) {
    printf("%f \n", i);
  }
  for (char i = 'a'; i <= 'z'; i++) {
    printf("%c \n", i);
  }
  return 0;
}