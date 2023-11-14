#include <stdio.h>

void createAndPrintMatrix(int rows, int cols) {
    int matrix[rows][cols];

    printf("Enter elements for the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix elements are:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    createAndPrintMatrix(3, 3);

    return 0;
}
