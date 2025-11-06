// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/6/2025
*/

#include <stdio.h>

int main() {
    FILE *file;
    float sales[] = {120.50, 80.00, 45.75, 200.00}; // Sample sales
    int i;
    float sale, total = 0;

    // Step 1: Create and write sample sales to the file
    file = fopen("sales.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    for (i = 0; i < 4; i++) {
        fprintf(file, "%.2f\n", sales[i]);
    }
    fclose(file);

    // Step 2: Read sales from the file and calculate total
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Sales transactions:\n");
    i = 1;
    while (fscanf(file, "%f", &sale) == 1) {
        printf("Transaction %d: %.2f\n", i++, sale);
        total += sale;
    }
    fclose(file);
     printf("\nTotal sales for the day: %.2f\n", total);

    return 0;
}

