#include<stdio.h>
int main (){

    /*
         Challenge 1: Even or Odd
        Write a program that asks for a number and displays whether the number is even or odd.
    */
    int num;
    printf("type a number: \n");
    scanf("%d",&num);
    if (num%2==0){
        printf("the number is even");
    }else{
        printf("the number is odd");
    }
    return 0;
}