#include <stdio.h>

int main() {
    int n;
    int odd=1;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    for(int i = 1; i<=n; i++)
    {
         odd= 2*i-1;
        printf("%d",odd);
    }
    return 0;
}