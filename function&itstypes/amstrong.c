#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,s=0,c=0,d;
    printf("enter the number");
    scanf("%d",&n1);
    n2=n1;
    while (n1!=0)
    {
        /* code */
        c++;
        n1=n1/10;
    }
    n1=n2;
    while (n1=!0)
    {
        /* code */
        d=n1%10;
        s=s+pow(d,c);
        n1=n1/10;
    }
    if(s==n2)
    printf("%d is a amastrong number",n2);
    else
    printf("%d is not amstrong number",n2);
    return 0;
}