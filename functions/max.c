#include <stdio.h>

int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }else return b;
    
};

int main(){

    int a,b;

    printf("enter num : ");
    scanf("%d",&a);
    
    printf("enter num : ");
    scanf("%d",&b);

    int result = max (a,b);

    printf("the max is : %d", max);


}