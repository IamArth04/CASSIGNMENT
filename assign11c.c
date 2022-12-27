#include<stdio.h>
int Prime(int);
int main()
{
    int b,x;
    printf("Enter a Number: ");
    scanf("%d",&b);
    x=Prime(b);
    printf("\n");
    return 0;
}
int Prime(int n)
{
    int c,i;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0);
            
            break;
    }
    if(i==n)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is not a Prime Number",n);
    }
    
    printf("\n");
    return c;
}