#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    return reversedNum == num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

