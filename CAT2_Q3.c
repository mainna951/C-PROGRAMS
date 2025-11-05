// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/5/2025
*/

#include <stdio.h>
#include <stdlib.h> // For EXIT_FAILURE and EXIT_SUCCESS

// Constants for the program
#define INPUT_FILENAME "input.txt"
#define OUTPUT_FILENAME "output.txt"
#define NUM_INTEGERS 10

/**
 * @brief Prompts the user to input 10 integers and stores them in a file.
 * * Writes 10 integers, each on a new line, to INPUT_FILENAME.
 *
 * @return 0 on success, 1 on file error.
 */
int input_integers() {
    FILE *file = NULL;
    int i, num;

    // 1. Open file for writing ("w" mode will create/overwrite the file)
    file = fopen(INPUT_FILENAME, "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Could not open file '%s' for writing.\n", INPUT_FILENAME);
        return 1;
    }

    printf("--- Input Phase ---\n");
    printf("Please enter %d integers:\n", NUM_INTEGERS);

    // 2. Loop to prompt and write 10 integers
    for (i = 0; i < NUM_INTEGERS; i++) {
        printf("Enter integer %d of %d: ", i + 1, NUM_INTEGERS);
        
        // Read user input
        if (scanf("%d", &num) != 1) {
            fprintf(stderr, "Error: Invalid input. Skipping remaining inputs.\n");
            // Clear input buffer in case of bad input
            while(getchar() != '\n'); 
            fclose(file);
            return 1;
        }

        // Write the integer to the file, followed by a newline
        fprintf(file, "%d\n", num);
    }

    // 3. Close the file and check for errors during close
    if (fclose(file) == EOF) {
        fprintf(stderr, "Error: Failed to close file '%s' properly.\n", INPUT_FILENAME);
        return 1;
    }
    
    printf("Successfully wrote %d integers to '%s'.\n", NUM_INTEGERS, INPUT_FILENAME);
    return 0;
}

/**
 * @brief Reads integers from the input file, calculates sum and average,
 * and writes the results to the output file.
 *
 * @return 0 on success, 1 on file error or if no numbers were read.
 */
int process_integers() {
    FILE *inputFile = NULL;
    FILE *outputFile = NULL;
    int num, count = 0;
    long long sum = 0; // Use long long for sum to prevent overflow

    printf("\n--- Processing Phase ---\n");

    // 1. Open input file for reading
    inputFile = fopen(INPUT_FILENAME, "r");
    if (inputFile == NULL) {
        fprintf(stderr, "Error: Could not open file '%s' for reading.\n", INPUT_FILENAME);
        return 1;
    }

    // 2. Open output file for writing
    outputFile = fopen(OUTPUT_FILENAME, "w");
    if (outputFile == NULL) {
        fprintf(stderr, "Error: Could not open file '%s' for writing.\n", OUTPUT_FILENAME);
        fclose(inputFile); // Clean up the input file handle
        return 1;
    }

    // 3. Read integers, calculate sum
    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Check if we successfully read the expected number of integers
    if (count != NUM_INTEGERS) {
        fprintf(stderr, "Warning: Expected %d integers, but only read %d from '%s'.\n", 
                NUM_INTEGERS, count, INPUT_FILENAME);
    }

    // Handle case where no numbers were read (e.g., empty file)
    if (count == 0) {
        fprintf(stderr, "Error: No integers were read from '%s'.\n", INPUT_FILENAME);
        fclose(inputFile);
        fclose(outputFile);
        return 1;
    }

    // 4. Calculate average and write results to output file
    double average = (double)sum / count;

    fprintf(outputFile, "Total Integers Processed: %d\n", count);
    fprintf(outputFile, "Sum: %lld\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);

    printf("Calculations complete. Results written to '%s'.\n", OUTPUT_FILENAME);

    // 5. Clean up file handles
    fclose(inputFile);
    if (fclose(outputFile) == EOF) {
        fprintf(stderr, "Error: Failed to close file '%s' properly.\n", OUTPUT_FILENAME);
        return 1;
    }

    return 0;
}

/**
 * @brief Reads and displays the contents of both the input and output files
 * in a formatted manner.
 */
void display_files() {
    FILE *file = NULL;
    char buffer[256];

    printf("\n--- Display Results Phase ---\n");

    // Helper function to display file content
    void print_file_content(const char* filename) {
        file = fopen(filename, "r");
        if (file == NULL) {
            fprintf(stderr, "Warning: Could not open file '%s' for display (it may not exist).\n", filename);
            return;
        }

        printf("\n<<< START OF FILE: %s >>>\n", filename);
        // Read file content line by line
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("%s", buffer);
        }
        printf("<<< END OF FILE: %s >>>\n", filename);

        fclose(file);
    }

    // Display contents of both files
    print_file_content(INPUT_FILENAME);
    print_file_content(OUTPUT_FILENAME);
}


int main() {
    printf("C File Processing Program Started.\n");
    
    // 1. Run the input function
    if (input_integers() != 0) {
        printf("\nProgram terminated due to error in Input Phase.\n");
        return EXIT_FAILURE;
    }

    // 2. Run the processing function
    if (process_integers() != 0) {
        printf("\nProgram terminated due to error in Processing Phase.\n");
        return EXIT_FAILURE;
    }

    // 3. Run the display function
    display_files();

    printf("\nC File Processing Program Finished Successfully.\n");
    return EXIT_SUCCESS;
}