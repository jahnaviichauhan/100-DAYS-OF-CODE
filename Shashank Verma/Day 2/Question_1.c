#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfectSquare(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of perfect square elements in the array: %d\n", sum);

    return 0;
}
