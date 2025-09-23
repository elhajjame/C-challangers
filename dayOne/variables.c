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

printf("type your last name: \n");
scanf("%s", &lastName);

printf("type your first name: \n");
scanf("%s", &firstName);

printf("enter your age: \n");
scanf("%d", &age);

printf("select your gender: \n");
scanf("%s", &gender);

printf("enter email: \n");
scanf("%s", &email);

printf("your last name is: %s \n", lastName);
printf("your firs name is: %s \n", firstName);
printf("your age is: %d \n", age);
printf("your gender is: %s \n", gender);
printf("email: %s \n", email);


    return 0;
}