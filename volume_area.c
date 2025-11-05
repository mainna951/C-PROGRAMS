//SIMPLE C PROGRAM TO CALCULATE VOLUME AND SURFACE AREA OF A CYLINDER
/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DESCRIPTION: C PROGRAM TO CALCULATE THE VOLUME AND SURFACE AREA OF A CYLINDER
*/

#include <stdio.h>

int main() {
    float r, h, volume, surface;

    printf("Enter radius: (cm)");
    scanf("%f", &r);

    printf("Enter height: (cm)");
    scanf("%f", &h);

    volume = 3.14 * r * r * h;
    surface = 2 * 3.14 * r * r + 2 * 3.14 * r * h;

    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surface);

    return 0;
}
