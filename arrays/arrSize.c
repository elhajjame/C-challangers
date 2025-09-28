#include <stdio.h>
int main() {
int n,i;

printf("how many array u wants: ");
scanf("%d",&n);

int arr[n];
for(i=0; i<arr[n]; i++)
{
    printf("array %d: ",i+1);
    scanf("%d",&arr[n]);
}
    return 0;
}