#include<stdio.h>
int main(){

/*
    Challenge 2: Temperature Conversion
    Write a program that asks for the temperature in Celsius and converts it to Kelvin. Formula:

K = C + 273.15
*/


float C;
float K;


printf("type the temperature in C: \n");
scanf("%f", &C);
K= C + 273.15;

printf("temperaturs in K: %f", K);
    return 0;
}