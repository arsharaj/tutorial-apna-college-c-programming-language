#include <stdio.h>

char findHighFreqChar(char str[]);

int main() {
  char str[50];
  printf("Enter a string : ");
  fgets(str, 50, stdin);
  printf("Highest Frequency Character is %c \n", findHighFreqChar(str));
  return 0;
}

char findHighFreqChar(char str[]) {
  int count[26], largest = -1;
  for (int i = 0; i < 26; i++) {
    count[i] = 0;
    for (int j = 0; str[j] != '\0'; j++) {
      if (str[j] == i + 97) {
        count[i]++;
        if (largest < count[i]) {
          largest = count[i];
        }
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    if (count[i] == largest) {
      return i + 97;
    }
  }
}