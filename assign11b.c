#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    HCF(a,b);
    printf("\n");
    return 0;
}
int HCF(int x,int y)
{
    int c,i;
    for(i=1;i<=x*y;i++)
    {
        if((x%i==0)&&(y%i==0))
        {
            c=i;
        }
    }
    printf("HCF is %d",c);
    return c;
}