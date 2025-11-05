//simple C program (Personal Details)
/*
Name: Joseph Thuo
Reg: CT100/G/26131/25
Description: C program to prompt user to enter personal details
*/

#include <stdio.h>

int main() {
    float height, weight;
    long long phone;

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Enter your phone number: ");
    scanf("%lld", &phone);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("\n--- Your Details ---\n");
    printf("Height: %.2f cm\n", height);
    printf("Phone Number: %lld\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}
