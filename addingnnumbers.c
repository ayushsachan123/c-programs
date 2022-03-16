#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,sum=0;
    printf("enter the no. till you want to add");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum =%d",sum);
    return 0;
}