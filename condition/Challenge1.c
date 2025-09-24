#include<stdio.h>
int main (){

int income;
int score;
int duration;
printf("annual income: ");
scanf("%d", &income);

printf("cridit score: ");
scanf("%d", &score);

printf("loan duration: ");
scanf("%d", &duration);

if (income>=30000 && score >= 700 && duration <= 10)
{
    printf("eligible.");
}else if (income>= 30000 && score >= 650 && duration <= 15)
{
    printf("eligible with conditions.");
}else printf("not eligible");


    return 0;
}