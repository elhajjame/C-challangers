#include <stdio.h>

int main() {
    
int ar[4];
int i;
for( i=0; i<4; i++)
{
    printf("enter a num %d: ", i+1);
    scanf("%d",&ar[i]);
}
for(i=0; i<4; i++)
{
    printf("ar[%d] = %d\n", i, ar[i]);
}
    return 0;
}