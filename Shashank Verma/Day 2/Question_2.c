#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX; // Initialize smallest to maximum possible integer value
    int secondSmallest = INT_MAX; // Initialize secondSmallest to maximum possible integer value

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        printf("No second smallest element found.\n");
    } else {
        printf("The second smallest element is: %d\n", secondSmallest);
    }

    return 0;
}
