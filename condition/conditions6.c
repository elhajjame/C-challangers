#include<stdio.h>
int main (){
/*

Challenge 6: Positive, Negative, or Zero

Write a program to check if a given number is positive, negative, or zero.

If the number is less than zero, it is negative.

If the number is greater than zero, it is positive.

If neither condition is true, the number is zero.
*/

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