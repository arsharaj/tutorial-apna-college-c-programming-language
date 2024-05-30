#include <stdio.h>
#include <string.h>

struct Address {
  int house_no;
  int block;
  char city[50];
  char state[50];
};

void printStructure(struct Address person[]);

int main() {
  struct Address person[5];
  person[0].house_no = 1;
  person[0].block = 1;
  strcpy(person[0].city, "Dholpur");
  strcpy(person[0].state, "Rajasthan");
  person[1].house_no = 2;
  person[1].block = 1;
  strcpy(person[1].city, "Ambala");
  strcpy(person[1].state, "Punjab");
  person[2].house_no = 3;
  person[2].block = 2;
  strcpy(person[2].city, "Amritsar");
  strcpy(person[2].state, "Punjab");
  person[3].house_no = 4;
  person[3].block = 2;
  strcpy(person[3].city, "Agra");
  strcpy(person[3].state, "Uttar Pradesh");
  person[4].house_no = 5;
  person[4].block = 3;
  strcpy(person[4].city, "Delhi");
  strcpy(person[4].state, "New Delhi");
  printStructure(person);
  return 0;
}

void printStructure(struct Address person[]) {
  for (int i = 0; i < 5; i++) {
    printf("House No : %d, Block : %d, City : %s, State : %s \n", 
            person[i].house_no, person[i].block, person[i].city, person[i].state);
  }
}