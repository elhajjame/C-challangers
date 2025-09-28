#include<stdio.h>
int main()
{
    int n1, n2,i;
    
    printf("first elements: ");
    scanf("%d",&n1);

    printf("second elements: ");
    scanf("%d",&n2); 

    int arr1[n1],arr2[n2];
    

    for ( i = 0; i < n1; i++)
    {
        printf("number %d: ",i);
        scanf("%d",&arr1[n1]);
    }

    for ( i = 0; i < n2; i++)
    {
        printf("number %d: ",i);
        scanf("%d",&arr2[n2]);
    }    
    
    int n3;
    
    for (i = 0; i < n3; i++)
    {
        n3= (arr1[n1]+arr2[n2]);
        }
        printf("firs one plus second one is %d", n3);

    
    return 0;


}