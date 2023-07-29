#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int num) {
    char str[20];
    sprintf(str, "%d", num);
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
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

    int largestPalindrome = -1;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i]) && arr[i] > largestPalindrome) {
            largestPalindrome = arr[i];
        }
    }

    if (largestPalindrome == -1) {
        printf("No palindrome found in the array.\n");
    } else {
        printf("The largest palindrome in the array is: %d\n", largestPalindrome);
    }

    return 0;
}
