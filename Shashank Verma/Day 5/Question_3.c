#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int R, C;
    int evenCount = 0;

    // Get the number of rows and columns from the user
    printf("Enter the number of rows (R): ");
    scanf("%d", &R);

    printf("Enter the number of columns (C): ");
    scanf("%d", &C);

    // Check if the entered dimensions are valid
    if (R <= 0 || C <= 0) {
        printf("Invalid dimensions. Rows and columns must be positive integers.\n");
        return 1; // Exit the program with an error status
    }

    // Read the matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }
    }

    // Print the matrix
    printf("The entered matrix is:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the frequency of even numbers in the matrix
    printf("Frequency of even numbers in the matrix: %d\n", evenCount);

    return 0;
}
