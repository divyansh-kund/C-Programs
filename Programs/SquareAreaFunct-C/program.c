#include <stdio.h>

int calculateSquareArea(int side) {
    return side * side;
}

int main() {
    int side;

    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    int area = calculateSquareArea(side);

    printf("Area of the square: %d\n", area);

    return 0;
}
