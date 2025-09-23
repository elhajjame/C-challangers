#include<stdio.h>
int main(){
    int c;
    printf("enter the temperature: ");
    scanf("%d", &c);

    if (c<0)
    {
        printf("solid");
    }
    else if (0<=c && c<100)
    {
        printf("liqude");
    }
    else
        printf("gaz");
    
    



}