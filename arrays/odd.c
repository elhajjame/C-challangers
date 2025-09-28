#include<stdio.h>
int main()
{
    int i;
    int ar[5];

    for(i = 0; i<5; i++)
    {
        printf("enter number %d: ", i);
        scanf("%d",&ar[i]);
    }

        printf("odd numbers \n");

    for(i = 0; i<5; i++)
    {
        if (ar[i]%2==1)
        {
            printf("%d\n",ar[i]);
        }
        
    }
}