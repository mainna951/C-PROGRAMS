//3D array

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 29th OCT 2025
DESC: 3D array that displays the total number of occupied rooms across all branches
*/

#include <stdio.h>

int main() {
    int chain[3][5][10] = {
        // Branch 1
        {
            {1,0,1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1,0,1},
            {1,1,1,1,0,0,0,0,1,1},
            {0,0,0,1,1,1,1,0,0,1},
            {1,0,1,0,1,0,1,0,1,0}
        },
        // Branch 2
        {
            {1,1,1,1,1,1,1,1,1,1},
            {0,0,0,0,0,0,0,0,0,0},
            {1,0,1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1,0,1},
            {1,1,1,1,1,0,0,0,0,0}
        },
        // Branch 3
        {
            {0,0,0,0,0,1,1,1,1,1},
            {1,1,0,0,1,1,0,0,1,1},
            {0,1,0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0,1,0},
            {1,1,1,1,1,1,1,1,1,1}
        }
    };

    int totalOccupied = 0;
    int b, f, r; // Declare loop variables here

    for (b = 0; b < 3; b++) {
        for (f = 0; f < 5; f++) {
            for (r = 0; r < 10; r++) {
                if (chain[b][f][r] == 1) {
                    totalOccupied++;
                }
}
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
