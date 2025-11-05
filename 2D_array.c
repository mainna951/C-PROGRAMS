//2D array

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 29th OCT 2025
DESC: 2D array that displays number of occupied and vacant rooms per floor
*/

#include <stdio.h>

int main() {
    int occupancy[5][10] = {
        {1,0,1,0,1,1,0,0,1,0},  // Floor 1
        {0,1,0,1,0,1,0,1,0,1},  // Floor 2
        {1,1,1,0,0,1,0,1,0,1},  // Floor 3
        {1,0,1,0,1,0,1,0,1,0},  // Floor 4
        {0,0,0,0,1,1,1,1,1,1}   // Floor 5
    };

    int floor, room;
    int occupied, vacant;

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
