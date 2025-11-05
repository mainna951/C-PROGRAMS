// simple c program
/*
Name: JOSEPH THUO
Reg: CT100/G/26131/25
Description: C PROGRAM TO PROMPT USER TO ENTER HEIGHT, PHONE NUMBER AND WEIGHT
*/

#include <stdio.h>

int main(){
    int height;
    long long phonenumber;
    int weight;

    printf("Enter your height:");
    scanf("%d", &height);

    printf("Enter your phone number :");
    scanf("%d", &phonenumber);

    printf("Enter your weight :");
    scanf("%d", &weight);

    printf("\nYour height is %d Cm\n", height);
    printf("\nYour phonenumber is %d\n", phonenumber);
    printf("Your weight is %d Kg\n", weight);

    return 0;
}

