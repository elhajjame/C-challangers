#include <stdio.h>
int main() {
    int n, i;
    int arr[6] = {12, 3, 14, 8, 9, 17};

    printf("Guess the winner number (0-20): ");
    scanf("%d", &n);

    int found = 0;
    for(i = 0; i < 6; i++) {
        if(n == arr[i]) {
            found = 1;  
            break;      
        }
    }

    if(found)
        printf("The number %d is in our system.\n", n);
    else
        printf("Sorry, try again next time.\n");

    return 0;
}
