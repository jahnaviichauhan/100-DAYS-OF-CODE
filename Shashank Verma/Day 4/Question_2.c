#include <stdio.h>

// Function to find the maximum scalar product of two vectors
long long int maxScalarProduct(int vector1[], int vector2[], int n) {
    long long int maxProduct = 0;
    for (int i = 0; i < n; i++) {
        maxProduct += (long long int)vector1[i] * vector2[i];
    }
    return maxProduct;
}

int main() {
    int n;
    printf("Enter the size of the vectors: ");
    scanf("%d", &n);

    int vector1[n], vector2[n];
    printf("Enter the elements of the first vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector1[i]);
    }

    printf("Enter the elements of the second vector:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector2[i]);
    }

    long long int result = maxScalarProduct(vector1, vector2, n);
    printf("Maximum scalar product of the two vectors: %lld\n", result);

    return 0;
}
