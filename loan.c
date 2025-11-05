//SIMPLE C PROGRAM THAT CHECKS LOAN ELIGIBILITY
/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DESCRIPTION: C PROGRAM THAT CHECKS LOAN ELIGIBILITY BASED ON AGE AND INCOME
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt user for input
    printf("Enter your age (Years): ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
