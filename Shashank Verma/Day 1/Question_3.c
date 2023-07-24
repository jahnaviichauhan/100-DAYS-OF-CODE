#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;
    int smallest, largest;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a valid size up to %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both smallest and largest
    smallest = arr[0];
    largest = arr[0];

    // Finding the smallest and largest elements
    for (i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element in the array: %d\n", smallest);
    printf("Largest element in the array: %d\n", largest);

    return 0;
}
