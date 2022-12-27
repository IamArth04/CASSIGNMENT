#include<stdio.h>
void prime(int,int);
int main()
{
    int l,u;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&l,&u);

    prime(l,u);
    printf("\n");
    return 0;
}
void prime(int x,int y)
{
    int c,i;
    for(c=x+1;c<=y-1;c++){
        for(i=2;i<c;i++)
                      if(c%i==0)
                          break;
        if(i==c)
                printf("%d ",c);
    }
    printf("\n");
}