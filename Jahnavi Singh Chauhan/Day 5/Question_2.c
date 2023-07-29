#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool isIdentityMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Check if the diagonal elements are 1 and the non-diagonal elements are 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
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

    // Check if the matrix is an identity matrix and display the result
    if (isIdentityMatrix(matrix, size)) {
        printf("The entered matrix is an identity matrix.\n");
    } else {
        printf("The entered matrix is NOT an identity matrix.\n");
    }

    return 0;
}
