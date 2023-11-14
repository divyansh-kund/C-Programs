#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student student1;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student1.name);

    printf("Enter student age: ");
    scanf("%d", &student1.age);

    // Display student information
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    return 0;
}
