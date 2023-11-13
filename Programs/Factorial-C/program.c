#include <stdio.h>

// Function to calculate factorial
unsigned long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

int main() {
    // Declare variables
    int number;

    // Input a number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long factorial = calculateFactorial(number);
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}