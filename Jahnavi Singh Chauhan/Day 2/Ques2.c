#include <stdio.h>
#include <limits.h>

int secSmallest(int arr[], int n)
{
    // assigning first element as smallest temporarily
    int smallest = arr[0];
    
    // we find the smallest element here
    for (int i=0; i < n; i++){
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    
    // temporarily assinging largest max value
    int sec_smallest = INT_MAX;
    
    // finding second smallest here
    for (int i=0; i < n; i++){
        if(arr[i] != smallest && arr[i] < sec_smallest)
            sec_smallest = arr[i];
    }

    return sec_smallest;
    
}
int main()
{
    int arr[] = {70, 40, 30, 20, 10, 90};
    
    // get the length of the array
    int len = sizeof(arr)/sizeof(arr[0]);    
    
    printf("The 2nd smallest : %d",secSmallest(arr, len));
}