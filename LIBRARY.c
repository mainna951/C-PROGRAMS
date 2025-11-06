// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/6/2025
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    file = fopen("borrowed_books.txt", "a"); // Open for appending

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fputs(title, file); // Write title to file
    fclose(file);

    printf("Book title saved successfully.\n");

    return 0;
}

