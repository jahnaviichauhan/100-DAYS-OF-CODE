#include <stdio.h>

void findTripletsWithSum(int arr[], int size, int targetSum) {
    printf("Triplets with sum %d in the array: ", targetSum);

    for (int i = 0; i < size - 2; i++) {
        int left = i + 1;
        int right = size - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == targetSum) {
                printf("(%d, %d, %d) ", arr[i], arr[left], arr[right]);
                left++;
                right--;
            } else if (currentSum < targetSum) {
                left++;
            } else {
                right--;
            }
        }
    }

    printf("\n");
}

int main() {
    int n, targetSum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    findTripletsWithSum(arr, n, targetSum);

    return 0;
}
