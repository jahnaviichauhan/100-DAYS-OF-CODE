#include <stdio.h>

// Function to find if an array is a subset of another array
int isSubset(int arr1[], int n1, int arr2[], int n2) {
    int isPresent;

    for (int i = 0; i < n1; i++) {
        isPresent = 0;

        // Check if the current element of arr1 is present in arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                isPresent = 1;
                break;
            }
        }

        // If the current element of arr1 is not present in arr2, it's not a subset
        if (!isPresent) {
            return 0;
        }
    }

    return 1; // If all elements of arr1 are present in arr2, it's a subset
}

int main() {
    int n1, n2;
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if arr1 is a subset of arr2
    if (isSubset(arr1, n1, arr2, n2)) {
        printf("The first array is a subset of the second array.\n");
    } else {
        printf("The first array is not a subset of the second array.\n");
    }

    return 0;
}
