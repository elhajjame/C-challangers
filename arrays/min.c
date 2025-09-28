int main() {
    
    int ar[10];
    int i, min;
    
    for(i=1; i <= 4; i++)
    {
        printf("enter a number %d: ",i);
        scanf("%d",&ar[i]);
    }
        min = ar[1];
    for(i=1; i<=4; i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    printf("min is : %d", min);
    
    return 0;
}