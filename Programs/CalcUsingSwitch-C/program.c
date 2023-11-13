#include <stdio.h>

// Function to get user input
float getInput() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}

int main() {
    // Declare variables
    int choice;
    float num1, num2, result;

    // Menu for the calculator
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input two numbers
    num1 = getInput();
    num2 = getInput();

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;

        case 4:
            // Check if the second number is not zero before performing division
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;

        default:
            printf("Invalid choice! Please choose between 1 and 4.\n");
            break;
    }

    return 0;
}
