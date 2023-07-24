#include <stdio.h>

#define MAX_SIZE 100

// Function to check if two arrays are equal
int areArraysEqual(int arr1[], int size1, int arr2[], int size2) {
    if (size1 != size2) {
        return 0; // If the sizes are different, arrays are not equal
    }

    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // If any elements are different, arrays are not equal
        }
    }

    return 1; // Arrays are equal if execution reaches this point
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2;

    printf("Enter the size of the first array (up to %d): ", MAX_SIZE);
    scanf("%d", &size1);

    if (size1 <= 0 || size1 > MAX_SIZE) {
        printf("Invalid size for the first array. Please enter a valid size up to %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array (up to %d): ", MAX_SIZE);
    scanf("%d", &size2);

    if (size2 <= 0 || size2 > MAX_SIZE) {
        printf("Invalid size for the second array. Please enter a valid size up to %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    if (areArraysEqual(arr1, size1, arr2, size2)) {
        printf("The two arrays are equal.\n");
    } else {
        printf("The two arrays are not equal.\n");
    }

    return 0;
}
