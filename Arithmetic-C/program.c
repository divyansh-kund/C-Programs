#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform arithmetic operations
    printf("Sum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n", num1 * num2);

    // Check if the second number is not zero before performing division
    if (num2 != 0) {
        printf("Quotient: %.2f\n", num1 / num2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    // Perform modulus operation if the second number is not zero
    if (num2 != 0) {
        printf("Modulus: %.2f\n", fmod(num1, num2));
    } else {
        printf("Cannot calculate modulus when the second number is zero.\n");
    }

    return 0;
}
