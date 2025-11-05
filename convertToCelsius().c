/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 22 OCT 2025
DESC: Simple c program to convert temperature from fahrenheit to celsius
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;

    // Prompt user for input temperature in fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    // Output result
    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(f));

    return 0;
}