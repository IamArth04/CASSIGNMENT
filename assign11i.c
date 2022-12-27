#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    square(n);
    printf("\n");
    return 0;
}
void square(int n)
{
    int i,x=0,s=0;
    for(i=1;i<=n;i++)
    {
        x=i*i;
        s=s+i;
        printf("\nThe square of %d is %d",i,x);
    }
}