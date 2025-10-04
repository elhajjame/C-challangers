#include <stdio.h>

int multi(int x, int y){

return x*y;
}


int main(){

    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);

    printf("enter a number: ");
    scanf("%d",&b);

    int result=multi(a,b);

    
    printf("result: %d",result);
return 0;
}