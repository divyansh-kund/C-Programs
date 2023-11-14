#include <stdio.h>

void insertAndPrintArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int myArray[size];
    insertAndPrintArray(myArray, size);

    return 0;
}
