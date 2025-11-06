// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/6/2025
*/

#include <stdio.h>

struct Student {
    char name[50];
    char reg_no[20];
    float marks;
};

int main() {
    FILE *file;
    struct Student students[3] = {
        {"Alice Wanjiku", "REG001", 82.5},
        {"Brian Otieno", "REG002", 76.0},
        {"Clara Njeri", "REG003", 91.2}
    };

    int i;
    // Write to file
    file = fopen("results.dat", "wb");
    if (file == NULL) {
        printf("Cannot create file.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fwrite(&students[i], sizeof(struct Student), 1, file);
    }
    fclose(file);

// Read from file
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Student Records:\n");


    while (fread(&students[0], sizeof(struct Student), 1, file)) {
        printf("Name   : %s\n", students[0].name);
        printf("Reg No : %s\n", students[0].reg_no);
        printf("Marks  : %.2f\n\n", students[0].marks);
    }

    fclose(file);
    return 0;
}
