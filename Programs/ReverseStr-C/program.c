#include <stdio.h>

void printReverseString(char str[]) {
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        ++length;
    }

    // Print the reverse of the string
    printf("Reverse of the string: ");
    for (int i = length - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    scanf("%s", myString);

    printReverseString(myString);

    return 0;
}
