#include<stdio.h>
int main(){

/*
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :
Yards = Km * 1093.61
*/

float Km, Y;

printf("enter distance in K: \n");
scanf("%f", &Km);

Y = Km * 1093.61;

printf("distane in yards: %.2f", Y);
}