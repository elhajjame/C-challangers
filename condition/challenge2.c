#include<stdio.h>
int main (){

    /*
Write a C program to calculate the sum of two given integer values.
 If the two values are the same, the program should return triple their sum
    */
int n1, n2;
printf("first value: \n");
scanf("%d", &n1);

printf("second value: \n");
scanf("%d", &n2);
//int sum = n1+n2;
if(n1==n2)
{
    printf("first number and second number are equale than %d", ((n1+n2)*3));
}
    return 0;
}