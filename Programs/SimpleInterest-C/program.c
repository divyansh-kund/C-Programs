#include <stdio.h>

int main() {
    // Declare variables
    float principal, rate, time, simpleInterest;

    // Input principal amount, rate of interest, and time in years
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest per year: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
