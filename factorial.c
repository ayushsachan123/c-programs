#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    if(n<0)
    printf("not possible");
    else if (n==0)
    {
        printf("%d",n);
    }
    else
    if(n>0)
    {
        for(i=1;i<=n;i++)
        fact=fact*i;
        printf("factorial of %d is %d",n,fact);

    }
    
    return 0;
}
