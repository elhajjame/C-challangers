#include<stdio.h>
int main()
{

int a,b,c;
printf("enter a number: ");
scanf("%d", &a);

printf("enter a number: ");
scanf("%d", &b);

c=a;
a=b;
b=c;

printf("new a %d \n", a);
printf("new b %d", b);

    return 0;
}