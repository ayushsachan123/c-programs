// * function with no argument & one return vlue *//
#include<stdio.h>
int addition()
{
    int x,y,z ;
printf("Enter two numbers");
scanf("%d%d",&x,&y);
z= x+y;
}
void main()
{
    int r;
    r=addition();
    printf("sum=%d",r);
    return 0;
}