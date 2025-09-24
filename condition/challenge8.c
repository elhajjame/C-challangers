#include<stdio.h>
int main(){

int grade;
printf("enter the grade: ");
scanf("%d",&grade);

if (grade<10)
{
    printf("fail");
}else
{
switch (grade)
{
    case 10: case 11: case 12: 
    printf("passabel");
    break;

    case 13: case 14: 
    printf("fairly good");
    break;

    case 15: case 16: 
    printf("good");
    break;

    case 17: case 18: 
    printf("very good");
    break;

    case 19: case 20: 
    printf("NAAAAAAAADY");
    break;
    
    default: printf("nooo");
}

}

    return 0;
}