#include <stdio.h>

int countOdds(int arr[], int n);

int main() {
  int arr[] = {1, 2, 5, 8, 9, 3, 5};
  printf("Odd Numbers : %d \n", countOdds(arr, 7));
  return 0;
}

int countOdds(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      count++;
    }
  }
  return count;
}