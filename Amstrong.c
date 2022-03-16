#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0,amst;
    printf("enter the number");
    scanf("%d",&n);
    amst=n;
    while (n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if (sum==amst)
    printf("amstrong number");
    else
    printf("not amstrong");
}