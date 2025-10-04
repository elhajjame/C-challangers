#include <stdio.h>
int main(){

    int size, i, deleted, pos,j;

    printf("enter the size of the array: ");
    scanf("%d", &size);

   int arr [size];

   for(i= 0; i<size; i++)
   {
    printf("element %d: ",i+1);
    scanf("%d",&arr[size]);
   }

   printf("delete the element: ");
   scanf("%d",&pos);
    
   for(j=pos-1; j<size-1; i++)
   {
    arr [j]= arr[j+1];
    size--;
   }
    
    
    
    
    
    return 0;
}