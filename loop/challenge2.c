#include<stdio.h>
int main(){

    int n;
    int multip=1;

    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++ )
    {
        multip=multip*i;
    }
        printf("%d", multip);
    
}