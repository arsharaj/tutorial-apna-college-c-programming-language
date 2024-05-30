#include <stdio.h>

void printArray(int arr[], int n);
void reverseArray(int arr[], int n);
void swap(int *a, int *b);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("Before Reverse : ");
  printArray(arr, 6);
  reverseArray(arr, 6);
  printf("After Reverse : ");
  printArray(arr, 6);
  return 0;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void reverseArray(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    swap(arr + i, arr - i + n - 1);
  }
}

void swap(int *a, int *b) {
  *a += *b;
  *b = *a - *b;
  *a -= *b;
}