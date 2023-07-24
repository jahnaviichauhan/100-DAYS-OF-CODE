//Find the Smallest and Largest Element in an Array

#include<stdio.h>
void main()
{
    int n, i, s, l;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter elements of array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    s=l=arr[0];
    
    printf("Printing the array :");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
        if(s>arr[i])
        {
            s=arr[i];
        }
        if(l<arr[i])
        {
            l=arr[i];
        }
    }
    
    printf("Smallest element : %d \nLargest element : %d",s,l);
    
 
    
}
    