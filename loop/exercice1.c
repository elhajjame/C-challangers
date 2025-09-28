#include <stdio.h>

int main() {
    int n;
    int sum=0;
    int i=1;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    while(i<=6)
    {
        
        sum=sum+i;
        i++;
    }
    
    printf("%d",sum);
    return 0;
}