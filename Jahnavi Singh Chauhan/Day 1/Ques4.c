//Program to check if two arrays are equal or not

#include<stdio.h>
void main()
{
    int n, m, i;
    printf("Enter size of array 1:");
    scanf("%d",&n);
    int arr[n];
    
     printf("Enter size of array 2:");
    scanf("%d",&m);
    int arr2[m];
    
    printf("Enter elements of array 1:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter elements of array 2:\n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    printf("Printing the array 1:");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    
     printf("Printing the array 2:");
    for(i=0; i<m; i++)
    {
        printf("%d",arr2[i]);
    }
    
    int c=0;
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==arr2[i])
               c++;
        }
        if(c==n)
            printf("Array is same.");
        else
            printf("Array is not same.");
    }
    else 
        printf("Array is not same.");
}
    