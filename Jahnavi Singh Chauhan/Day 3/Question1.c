#include <stdio.h>

void findUniqueElements(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    int frequency[maxElement + 1];
    for (int i = 0; i <= maxElement; i++) {
        frequency[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    printf("Non-repeating elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (frequency[arr[i]] == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findUniqueElements(arr, n);

    return 0;
}
