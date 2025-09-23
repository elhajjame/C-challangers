#include<stdio.h>
int main (){
/*
Write a program that asks for the speed in kilometers per hour (km/h) 
and converts it to meters per second (m/s). Formula:

m/s = km/h × 0.27778
*/

float Km;

printf("speed in Km per hour:\n");
scanf("%f", &Km);

float m = Km*0.27778;

printf("speed meters per second: %f\n", m);

    return 0;
}