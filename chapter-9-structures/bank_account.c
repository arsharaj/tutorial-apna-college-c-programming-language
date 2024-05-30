#include <stdio.h>
#include <string.h>

typedef struct BankAccount {
  char name[50];
  int account_no;
  float balance;
} Account ;

int main() {
  Account accounts;
  strcpy(accounts.name, "Aryan");
  accounts.account_no = 123456;
  accounts.balance = 70000;
  printf("Name : %s  Account No : %d  Balance : %f \n", accounts.name, accounts.account_no, accounts.balance);
  return 0;
}