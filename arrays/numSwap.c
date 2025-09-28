#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter the elements: ");
    scanf("%d",&n);

    int arr[n];

    for(a=0; a<n; a++)
    {
        printf("number %d: ",a);
        scanf("%d", &arr[a]);
    }
            int va = arr[c];


    for ( b = 0; b < n; b++)
    {
     for (c = 0; c < n; c++)
     {
        if (arr[b]>arr[c])
        {
            arr[c] = arr[c+1];
            arr[c+1] = va;
        }
        
        
     }
     
    }
   printf("%d\n ",va); 
    
}