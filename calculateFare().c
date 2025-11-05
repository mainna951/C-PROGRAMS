/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 22 OCT 2025
DESC: Simple c program to take in distance travelled as input then give out transport fare
*/

#include <stdio.h>

// Function to calculate fare
int calculateFare(int distance) {
    return distance * 50; // KSh. 50 per kilometer
}

int main() {
    int distance, fare;

    // Prompt user to enter distance
    printf("Enter distance traveled (in kilometers): ");
    scanf("%d", &distance);

    // Calculate fare using the function
    fare = calculateFare(distance);

    // Display the result
    printf("Total fare is KSh. %d\n", fare);

    return 0;
}

