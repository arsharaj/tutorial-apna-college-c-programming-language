#include <stdio.h>

void generateTable(int arr[], int num);
void printTables(int arr[][10], int a, int b);

int main() {
  int tables[2][10];
  generateTable(tables[0], 2);
  generateTable(tables[1], 3);
  printf("Tables of 2 and 3 : \n");
  printTables(tables, 2, 10);
  return 0;
}

void generateTable(int arr[], int num) {
  for (int i = 1, j = 0; i <= 10, j < 10; i++, j++) {
    arr[j] = num * i;
  }
}

void printTables(int arr[][10], int a, int b) {
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}