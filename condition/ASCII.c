#include<stdio.h>
int main (){

/*
    Write a C program that asks the user to enter a character, 
    then checks and prints whether the character is:

Uppercase letter (A–Z)
Lowercase letter (a–z)
Digit (0–9)
Special character (anything else
*/

char letter;
//int number;

printf("enter Uppercase or lowercase letter or a number: ");
scanf("%c", &letter);

if (letter>=65 && letter <= 90)
{
    printf("the character is uppercase");
}
else if(letter>=97 && letter<=122)
{
    printf("the character is lowercase");

}else if (letter >=0 && letter <= 9)
{
    printf("its a digit");
}
else printf("special character");

    return 0;
}