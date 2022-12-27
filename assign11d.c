#include<stdio.h>
int NPrime(int);
int main()
{
    int b,s;
    printf("Enter a Number: ");
    scanf("%d",&b);
    s=NPrime(b);
    printf("\n");
    return 0;
}
int NPrime(int n)
{
    int c,i,j,count=0;
    for(i=n;i>0;i++)
    {
        count= 0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                     count++;
        }
        if(count==2)
        {
            printf("%d",i);
            break;
        }
    }
    return c;
}