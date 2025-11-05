// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/5/2025
*/

#include <stdio.h>

int main() {
    // ii. Declare and initialize a 2D array named 'scores' with 2 rows and 2 columns.
    // The specified values are: [65 92] and [84 72]
    int scores[2][2] = {
        {65, 92}, // Row 0
        {84, 72}  // Row 1
    };
    
    // The program should also handle the second set of values: [35 70] and [59 67]
    // To show this, we can declare a second array or expand the first one.
    // Let's create a 2x4 array to hold all four columns, since they appear related.
    // If you prefer a 2x2 array for each pair, let me know!
    
    int all_scores[2][4] = {
        {65, 92, 35, 70}, // Row 0: Student/Subject 1 scores
        {84, 72, 59, 67}  // Row 1: Student/Subject 2 scores
    };
    
    // Print the contents of the 'all_scores' array
    printf("--- 2D Array (Scores) Contents ---\n");
    printf("     Col 1 | Col 2 | Col 3 | Col 4\n");
    printf("----------------------------------\n");
    
    // Loop through rows
    for (int i = 0; i < 2; i++) {
        printf("Row %d |", i);
        
        // Loop through columns
        for (int j = 0; j < 4; j++) {
            // Print each score, nicely formatted
            printf(" %5d |", all_scores[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------\n");

    return 0;
}