/*
NAME: JOSEPH THUO
REG NO: CT100/G/26131/25
DATE: 09 OCT 2025
DESCRIPTION: C PROGRAM TO ALLOW BANK ATM USERS TO WITHDRAW AS LONG AS THE ACCOUNT BALANCE IS GREATER THAN ZERO
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    // Get starting balance from user
    printf("Enter starting account balance: Ksh. ");
    scanf("%f", &balance);

    // Continue withdrawals while balance is greater than 0
    while (balance > 0) {
        printf("Enter amount to withdraw: Ksh. ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Remaining balance: Ksh. %.2f\n", balance);
    } 

    printf("Transaction failed. Balance is zero or negative.\n");

    return 0;
}

