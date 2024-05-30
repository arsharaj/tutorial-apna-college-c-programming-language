#include <stdio.h>

void printHello();
void printGoodbye();
void greetIndian();
void greetFrench();
void calculatePrice(float value);

int main() {
  printHello();
  printGoodbye();
  int var;
  printf("1. Indian \n");
  printf("2. French \n");
  printf("Enter your choice : ");
  scanf("%d", &var);
  if (var == 1) {
    greetIndian();
  } else if (var == 2) {
    greetFrench();
  } else {
    printf("Enter a valid choice! \n");
  }
  int value = 100.0;
  calculatePrice(value);
  printf("Value is %d \n", value);
  return 0;
}

void printHello() {
  printf("Hello World \n");
}

void printGoodbye() {
  printf("Goodbye \n");
}

void greetIndian() {
  printf("Namaste \n");
}

void greetFrench() {
  printf("Bonjour \n");
}

void calculatePrice(float value) {
  value += (0.18 * value);
  printf("Price is %f \n", value);
}