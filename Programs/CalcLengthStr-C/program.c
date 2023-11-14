#include <stdio.h>

int calculateStringLength(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        ++length;
    }

    return length;
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    scanf("%s", myString);

    int length = calculateStringLength(myString);
    printf("Length of the string: %d\n", length);

    return 0;
}
