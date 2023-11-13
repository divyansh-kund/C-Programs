#include <stdio.h>

int main() {
    // Declare variables
    int rollNumber;
    float subject1, subject2, subject3, totalMarks, average;
    char grade;

    // Input roll number and marks for each subject
    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    // Calculate total marks and average
    totalMarks = subject1 + subject2 + subject3;
    average = totalMarks / 3.0;

    // Determine the grade based on average
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display the results
    printf("\nRoll Number: %d\n", rollNumber);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
