#include<stdio.h>
int main (){
int number;
printf("enter number: ");
scanf("%d", &number);

if (number > 0)
{
    printf("the number is positive");
} 
else if(number < 0)
{
    printf("the number is nigative");
}else {
printf("the number are zero");
}


    return 0;
}