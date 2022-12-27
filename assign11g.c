#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    fibonacci(n);
    printf("\n");
    return 0;
}
void fibonacci(int d)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=d;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\nNth term is %d",c);
}