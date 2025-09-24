#include<stdio.h>
int main (){
int a,b,c;

printf("side one \n");
scanf("%d", &a);

printf("side two: \n");
scanf("%d", &b);

printf("side three \n");
scanf("%d", &c);

if ((a+b)>c || (a+c)>b || (b+c)>a){
    printf("triangle");
if(a==b && a==c && c==b)
printf("Equilateral");
}else if (a==b || a==c || c==b){
printf("Isosceles");
}else{
    printf("Scalene");
}
    return 0;
}