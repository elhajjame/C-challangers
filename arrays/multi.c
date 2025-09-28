#include <stdio.h>
int main(){

    int i,n;
    int multi=1;
    int multiNum;
    printf("enter numbers of the elements: ");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the multiplication number: ");
    scanf("%d",&multiNum);

    for (i = 0; i < n; i++)
    {
        multi=multiNum*arr[i];
        printf("%d\n",multi);
    }
    
}