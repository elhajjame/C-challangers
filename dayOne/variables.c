#include<stdio.h>
int main(){
    /*
    Challenge 1: Display Information
Write a C program that displays your personal information: 
last name, first name, age, gender, and email address. The data is entered from the keyboard.
    */
   char lastName [50];
    char firstName [50];
    int age;
    char gender [6];
    char email [50];

printf("type your last name");
scanf("%s", &lastName);

printf("type your first name");
scanf("%s", &firstName);

printf("enter your age");
scanf("%d", &age);

printf("select your gender");
scanf("%s", &gender);

printf("enter email");
scanf("%s", &email);

    

    return 0;
}