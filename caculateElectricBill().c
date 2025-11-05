/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 22 OCT 2025
DESC: Simple c program to calculate electric bill consumed
*/

#include <stdio.h>

int calculateElectricBill(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }

    return bill;
}

int main() {
    int units;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    int totalBill = calculateElectricBill(units);
    printf("Total bill for %d units is: KSh. %d\n", units, totalBill);

    return 0;
}

