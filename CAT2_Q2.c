// SIMPLE C PROGRAM

/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 11/5/2025
*/

#include <stdio.h>

int main() {
    double hours_worked, hourly_wage;
    double gross_pay = 0.0, taxes = 0.0, net_pay = 0.0;

    // Define constants directly inside main or use magic numbers for simplicity
    const double STANDARD_HOURS = 40.0;
    const double OVERTIME_MULTIPLIER = 1.5;
    const double TAX_BRACKET_LIMIT = 600.0;
    const double TAX_RATE_1 = 0.15; // 15%
    const double TAX_RATE_2 = 0.20; // 20%
    
    printf("--- Simple Weekly Pay Calculator ---\n");
    
    // 1. Get user input
    printf("Enter hours worked this week: ");
    if (scanf("%lf", &hours_worked) != 1 || hours_worked < 0) {
        fprintf(stderr, "Error: Invalid input for hours.\n");
        return 1;
    }

    printf("Enter hourly wage ($): ");
    if (scanf("%lf", &hourly_wage) != 1 || hourly_wage < 0) {
        fprintf(stderr, "Error: Invalid input for wage.\n");
        return 1;
    }
    
    // 2. Calculate Gross Pay (Overtime logic included here)
    if (hours_worked <= STANDARD_HOURS) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        double regular_pay = STANDARD_HOURS * hourly_wage;
        double overtime_hours = hours_worked - STANDARD_HOURS;
        double overtime_pay = overtime_hours * hourly_wage * OVERTIME_MULTIPLIER;
        gross_pay = regular_pay + overtime_pay;
    }

    // 3. Calculate Taxes (Tax bracket logic included here)
    if (gross_pay > 0.0) {
        if (gross_pay <= TAX_BRACKET_LIMIT) {
            // 15% of the total pay
            taxes = gross_pay * TAX_RATE_1;
        } else {
            // 15% of the first $600
            double tax_on_first_bracket = TAX_BRACKET_LIMIT * TAX_RATE_1;
            
            // 20% of the rest
            double remaining_pay = gross_pay - TAX_BRACKET_LIMIT;
            double tax_on_second_bracket = remaining_pay * TAX_RATE_2;
            
            taxes = tax_on_first_bracket + tax_on_second_bracket;
        }
    }
    
    // 4. Calculate Net Pay
    net_pay = gross_pay - taxes;

    // 5. Print Results
    printf("\n--- Payroll Summary ---\n");
    printf("Gross Pay:      $%.2f\n", gross_pay);
    printf("Taxes Withheld: $%.2f\n", taxes);
    printf("Net Pay:        $%.2f\n", net_pay);
    printf("---------------------------\n");
    
    return 0;
}