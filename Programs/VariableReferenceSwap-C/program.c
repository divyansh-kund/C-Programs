#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping (inside function): a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);

    printf("After swapping (in main): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
