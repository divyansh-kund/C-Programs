#include <stdio.h>

int main() {
    // Declare variables
    float subject1, subject2, subject3, subject4, subject5;
    float sum, average, percentage, totalMarks = 500;

    // Input marks for each subject
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &subject5);

    // Calculate sum, average, and percentage
    sum = subject1 + subject2 + subject3 + subject4 + subject5;
    average = sum / 5.0;
    percentage = (sum / totalMarks) * 100;

    // Display the results
    printf("Sum of marks: %.2f\n", sum);
    printf("Average marks: %.2f\n", average);
    printf("Percentage of marks: %.2f%%\n", percentage);

    return 0;
}
