#include <stdio.h>
int main() {
    int n, i;
    int arr[6] = {12, 3, 14, 8, 9, 17};

    printf("Guess the winner number (0-20): ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        if (n==arr[i])
        {
            printf("the number %d is found",n);
            break;
        }
        
    }
    if (n==i)
    {
        printf("the number are not found");
    }
    

    return 0;
}
