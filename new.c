#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,sum=0,num;
    printf("enter the no. till you want to add");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("enter the no.");
        scanf("%d",&num);
        sum=sum+num;
        i=i+1;
    }
    printf("sum =%d",sum);
    return 0;
}