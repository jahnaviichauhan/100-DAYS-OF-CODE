#include<stdio.h>
#include<math.h>
int sumOfPositiveSquare(int *arr,int n)
{
	int i,s,sum=0;
	for(i=0;i<n;i++)
    {
        s=sqrt(arr[i]);
        if(pow(s,2)==arr[i])
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int main()
{
    int n, m,i,j,sum=0;
    printf("\nEnter number of elements in an array : ");
	scanf("%d",&n);
	int a[n];
    printf("\nEnter %d elements of an array :\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
	sum=sumOfPositiveSquare(a,n);
    printf("\nSum of positive square elements in an array is : %d\n",sum);
	return 0;
}