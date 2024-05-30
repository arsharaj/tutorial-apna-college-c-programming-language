#include <stdio.h>

void generateFibonacci(int arr[], int n);
void printArray(int arr[], int n);

int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int arr[n];
  generateFibonacci(arr, n);
  printf("Fibonacci Sequence is : ");
  printArray(arr, n);
  return 0;
}

void generateFibonacci(int arr[], int n) {
  if (n == 2) {
    arr[0] = 0;
    arr[1] = 1;
    return;
  }
  if (n == 1) {
    arr[0] = 0;
    return;
  }
  generateFibonacci(arr, n - 1);
  arr[n - 1] = arr[n - 2] + arr[n - 3];
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}