#include<stdio.h>
int main()
{
    
    int i,n;
    int sum =0;

    printf("enter the elements: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
printf("the sum is : %d",sum );
}

