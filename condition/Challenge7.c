#include<stdio.h>
int main (){

   char character, A, Z;
    printf("type a character a to z: ");
    scanf("%c", &character);

    if (character>=65 && character<=90)
    {
       printf("the alphabet is a uppercase");
    }else printf("the alphabet are not");
    
    return 0;
}