#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at the end of the array
void insertElement(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        arr[*size] = element;
        (*size)++;
        printf("Element inserted successfully!\n");
    } else {
        printf("Array is full. Cannot insert element.\n");
    }
}

// Function to delete an element from the array
void deleteElement(int arr[], int *size, int element) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            printf("Element deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Element not found in the array.\n");
    }
}

// Function to search for an element in the array
void searchElement(int arr[], int size, int element) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            printf("Element found at index %d.\n", i);
            break;
        }
    }
    if (!found) {
        printf("Element not found in the array.\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element;

    do {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Search element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insertElement(arr, &size, element);
                break;
            case 2:
                printf("Enter the element to delete: ");
                scanf("%d", &element);
                deleteElement(arr, &size, element);
                break;
            case 3:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                searchElement(arr, size, element);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
