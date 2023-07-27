#include <stdio.h>

// Function to remove duplicates from the array
int removeDuplicates(int arr[], int n) {
    int uniqueIndex = 0;

    for (int i = 0; i < n; i++) {
        // Check if the current element is unique
        int isUnique = 1;
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        // If the current element is unique, add it to the result array
        if (isUnique) {
            arr[uniqueIndex++] = arr[i];
        }
    }

    return uniqueIndex; // Return the new size of the array without duplicates
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize = removeDuplicates(arr, n);

    printf("Array with duplicates removed: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
