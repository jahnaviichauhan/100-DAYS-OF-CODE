//Program to insert, delete and search an element in an array

#include<stdio.h>
void main()
{
    int n, i, m;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter elements of array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Original array :");
    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n Enter 1 to insert element, 2 to delete element and 3 to search an element. \n");
    scanf("%d",&m);
    
    if(m==1)
    {
        int a, b;
        printf("Enter element to insert :"); 
        scanf("%d", &a);
        printf("Enter position of element :");
        scanf("%d",&b);
        arr[b]=a;
        
        printf("Array with inserted element :");
        for(i=0; i<n; i++)
        {
            printf("%d",arr[i]);
        }  
    }
    
    else if(m==2)
    {
        int b;
        printf("Enter position of element to delete :");
        scanf("%d",&b);
        arr[b+1]=0;
        
        printf("Array with deleted element :");
        for(i=0; i<n; i++)
        {
            printf("%d",arr[i]);
        }  
    }
    else if(m==3)
    {
        int a;
        printf("Enter element to search :"); 
        scanf("%d", &a);
      
        for(i=0; i<n; i++)
        {
            if(arr[i]==a)
            printf("The element is found and it position is %d ", i);
        }
        }
    else
    {
        printf("Wrong input");
    }
    }
