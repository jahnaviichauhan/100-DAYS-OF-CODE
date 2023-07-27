#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the GCD of an array of elements
int findArrayGCD(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
        if (result == 1) // If GCD is 1, it means all elements cannot be made equal
            return 1;
    }
    return result;
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

    int gcdValue = findArrayGCD(arr, n);
    if (gcdValue == 1) {
        printf("Not all numbers can be made equal.\n");
    } else {
        printf("All numbers can be made equal with a common value of %d.\n", gcdValue);
    }

    return 0;
}
