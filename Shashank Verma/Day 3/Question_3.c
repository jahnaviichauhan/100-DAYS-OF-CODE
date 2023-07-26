#include <stdio.h>

void findSymmetricPairs(int arr[][2], int size) {
    printf("Symmetric pairs in the array: ");
    int count = 0;

    for (int i = 0; i < size; i++) {
        int first = arr[i][0];
        int second = arr[i][1];

        for (int j = i + 1; j < size; j++) {
            int nextFirst = arr[j][0];
            int nextSecond = arr[j][1];

            if (first == nextSecond && second == nextFirst) {
                printf("(%d, %d) ", first, second);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("None");
    }

    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of pairs: ");
    scanf("%d", &n);

    int arr[n][2];
    printf("Enter %d pairs (a, b): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i][0], &arr[i][1]);
    }

    findSymmetricPairs(arr, n);

    return 0;
}
