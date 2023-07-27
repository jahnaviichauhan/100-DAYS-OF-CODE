#include <stdio.h>

void findMissingElements(int arr[], int size, int start, int end) {
    int rangeSize = end - start + 1;
    int range[rangeSize];

    for (int i = 0; i < rangeSize; i++) {
        range[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] >= start && arr[i] <= end) {
            range[arr[i] - start] = 1;
        }
    }

    printf("Missing elements in the range [%d, %d]: ", start, end);
    for (int i = 0; i < rangeSize; i++) {
        if (range[i] == 0) {
            printf("%d ", start + i);
        }
    }
    printf("\n");
}

int main() {
    int n, start, end;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the range start: ");
    scanf("%d", &start);

    printf("Enter the range end: ");
    scanf("%d", &end);

    findMissingElements(arr, n, start, end);

    return 0;
}
