// simple c program

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/5/2025
*/

#include <stdio.h>
#include <stdlib.h> // For exit()

// Define the number of integers to process
#define NUM_INTEGERS 10
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

// --- 1. Function to prompt user and write 10 integers to input.txt ---
/**
 * Prompts the user to enter 10 integers and writes them, one per line,
 * to the file specified by INPUT_FILE. Includes error handling for file opening.
 *
 * @return 0 on success, 1 on failure.
 */
int write_input_file() {
    printf("\n--- Task 1: Generating Input File ---\n");
    FILE *file = fopen(INPUT_FILE, "w"); // Open file for writing (creates or truncates)

    if (file == NULL) {
        perror("Error opening input.txt for writing");
        return 1;
    }

    int num;
    printf("Please enter %d integers:\n", NUM_INTEGERS);

    for (int i = 0; i < NUM_INTEGERS; i++) {
        printf("Enter integer %d/%d: ", i + 1, NUM_INTEGERS);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please restart the program.\n");
            fclose(file);
            return 1;
        }
        // Write the integer followed by a newline character
        fprintf(file, "%d\n", num);
    }

    fclose(file); // Close the file stream
    printf("%d integers successfully written to %s.\n", NUM_INTEGERS, INPUT_FILE);
    return 0;
}


// --- 2. Function to read, process, and write results to output.txt ---
/**
 * Reads integers from INPUT_FILE, calculates their sum and average,
 * and writes the sum and average to OUTPUT_FILE. Includes error handling.
 *
 * @return 0 on success, 1 on failure.
 */
int process_and_write_output() {
    printf("\n--- Task 2: Processing Data and Generating Output File ---\n");
    FILE *input_file = fopen(INPUT_FILE, "r");
    FILE *output_file = fopen(OUTPUT_FILE, "w");

    if (input_file == NULL) {
        perror("Error opening input.txt for reading");
        return 1;
    }
    if (output_file == NULL) {
        perror("Error opening output.txt for writing");
        fclose(input_file);
        return 1;
    }

    long long sum = 0;
    int count = 0;
    int num;

    // Read integers from the input file until end-of-file (EOF)
    while (fscanf(input_file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(input_file);

    if (count == 0) {
        printf("Error: Could not read any integers from %s.\n", INPUT_FILE);
        fclose(output_file);
        return 1;
    }

    // Calculate average using floating-point division
    double average = (double)sum / count;

    // Write results to the output file
    fprintf(output_file, "Total Integers Processed: %d\n", count);
    fprintf(output_file, "Sum of Integers: %lld\n", sum);
    fprintf(output_file, "Average of Integers: %.2f\n", average);

    fclose(output_file);
    printf("Calculations complete. Sum and average written to %s.\n", OUTPUT_FILE);
    return 0;
}


// --- 3. Function to read and display file contents in a formatted manner ---
/**
 * Reads and displays the contents of a given file in a formatted block.
 *
 * @param filename The path to the file to display.
 * @return 0 on success, 1 on failure.
 */
int display_file_contents(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for display");
        printf("Could not display contents of %s.\n", filename);
        return 1;
    }

    printf("\n--- Contents of %s ---\n", filename);
    printf("*********************************\n");

    char buffer[256];
    // Read line by line and print to stdout
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    printf("*********************************\n");

    fclose(file);
    return 0;
}


// --- 4. Main function to orchestrate the program ---
int main() {
    printf("C File Processing Program Started.\n");

    // 1. Generate input file
    if (write_input_file() != 0) {
        return EXIT_FAILURE;
    }

    // 2. Process data and generate output file
    if (process_and_write_output() != 0) {
        return EXIT_FAILURE;
    }

    // 3. Display file contents
    printf("\n--- Task 3: Displaying File Contents ---\n");
    display_file_contents(INPUT_FILE);
    display_file_contents(OUTPUT_FILE);

    printf("\nProgram finished successfully.\n");
    return EXIT_SUCCESS;
}