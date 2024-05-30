#include <stdio.h>

int findLargest(int arr[], int n);

int main() {
  int arr[] = {-1, 13, 23, 1, 10, -23};
  printf("Largest Number = %d \n", findLargest(arr, 6));
  return 0;
}

int findLargest(int arr[], int n) {
  int largest = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}