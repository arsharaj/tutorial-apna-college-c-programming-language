#include <stdio.h>

int countX(int arr[], int n, int key);

int main() {
  int arr[] = {1, 2, 3, 1, 2, 3, 2, 3, 3, 3};
  printf("Count %d = %d \n", 3, countX(arr, 10, 3));
  return 0;
}

int countX(int arr[], int n, int key) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      count++;
    }
  }
  return count;
}