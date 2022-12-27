#include<stdio.h>
void prime(int);
int main()
{
    int x,n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    prime(n);
    printf("\n");
    return 0;
}
void prime(int n)
{
    int i=0,temp1=1,temp;
    while(temp1<=n){
        temp=0;
        for(i=2;i<=(temp1/2);i++)
        {
        if(temp1%i==0)
        {
            temp=1;
            break;
        }
        }
        if(temp==0)
              printf("%d is a prime number \n",temp1);
        temp1++;
    }
}
