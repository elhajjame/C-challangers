#include<stdio.h>
int sum(int x,int y){
    
    return x + y ;

};

int main(){
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);

    printf("enter a number : ");
    scanf("%d",&b);

    int ruselt= sum(a,b);

    printf("the ruselt is %d", ruselt);
    return 0;
}