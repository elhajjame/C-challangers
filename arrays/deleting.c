#include<stdio.h>
int main(){
    
    int i, size, pos,deleted;

    printf("enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the position that u want to delete: ");
    scanf("%d",&pos);
    if (pos<0 || pos> size)
    {
        printf("invalid position");
    }
    else{
         deleted= arr[pos-1];

    for ( i = pos-1; i < size-1; i++)
    {
        arr[i]=arr[i+1];
        size--;
    }
    }
    printf("deleted item is : %d",deleted);
}