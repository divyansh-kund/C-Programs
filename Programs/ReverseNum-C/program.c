#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of %d is %d.\n", num, reverseNumber(num));

    return 0;
}
