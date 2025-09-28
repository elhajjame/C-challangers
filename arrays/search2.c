#include<stdio.h>
int main(){

    int n,i,n1;

    printf("enter the nuymber of the element: ");
    scanf("%d",&n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        printf("number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("search on the element: ");
    scanf("%d",&n1);

    for ( i = 0; i < n; i++)
    {
        if (n1==arr[i])
        {
            printf("the number %d is here",n1);
           break;
        }
        
    }
    if (i==n)
    {
        printf("the number is not exst");
    }
    
    
    
    return 0;
}