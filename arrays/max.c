int main() {
    
    int ar[10];
    int i, max;
    
    for(i=1; i <= 4; i++)
    {
        printf("enter a number %d: ",i);
        scanf("%d",&ar[i]);
    }
        max = ar[1];
    for(i=1; i<=4; i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
        }
    }
    printf("max is : %d", max);
    
    return 0;
}