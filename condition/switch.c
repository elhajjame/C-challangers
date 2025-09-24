#include<stdio.h>
int main (){
/*
    Write a C program that checks if a character entered by the user 
    is a vowel (a, e, i, o, u) or not using the switch-case statement.
*/
char vowel ;
printf("enter a letter: ");
scanf("%s", &vowel);

switch(vowel)
{
    case 'a': 
    printf("the chaharacter is a vowel");
    break;

    case 'e': 
    printf("the chaharacter is a vowel");
    break;

        case 'i': 
    printf("the chaharacter is a vowel");
    break;

        case 'o': 
    printf("the chaharacter is a vowel");
    break;

        case 'u': 
    printf("the chaharacter is a vowel");
    break;

    default : printf("not a vowel");


}


    return 0;
}