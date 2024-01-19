#include <stdio.h>

#define MAX_SIZE 100

void printUpperTriangular(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    printf("Upper triangular matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    // Get the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Check if the entered size is valid
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid matrix size. Size should be a positive integer not exceeding %d.\n", MAX_SIZE);
        return 1; // Exit the program with an error status
    }

    // Read the matrix elements from the user
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("The entered matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the upper triangular matrix
    printUpperTriangular(matrix, size);

    return 0;
}
