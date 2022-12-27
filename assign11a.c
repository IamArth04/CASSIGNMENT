#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    LCM(a,b);
    printf("\n");
    return 0;
}
int LCM(int x,int y)
{
    int c,i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            break;
        }
    }
    printf("LCM is %d",i);
    return c;
}