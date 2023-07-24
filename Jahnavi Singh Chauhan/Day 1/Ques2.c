//Program to find the sum of elements of an array

#include<stdio.h>
void main()
{
    int n, i, sum=0;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter elements of array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Printing the array :");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
        sum+=arr[i];
    }
    
    printf("Sum of array : %d", sum);
    
}
    