#include <stdio.h>
#include <stdlib.h>

// Function to compare integers for sorting in ascending order
int compareAscending(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Function to compare integers for sorting in descending order
int compareDescending(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

// Function to find the minimum scalar product of two vectors
long long int minScalarProduct(int vector1[], int vector2[], int n) {
    qsort(vector1, n, sizeof(int), compareAscending);
    qsort(vector2, n, sizeof(int), compareDescending);

    long long int minProduct = 0;
    for (int i = 0; i < n; i++) {
        minProduct += (long long int)vector1[i] * vector2[i];
    }
    return minProduct;
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

    long long int result = minScalarProduct(vector1, vector2, n);
    printf("Minimum scalar product of the two vectors: %lld\n", result);

    return 0;
}
