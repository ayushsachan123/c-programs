// * function with argument & no return value *//
#include<stdio.h>
void addition(int x,int y)
{
    printf("sum=%d",x+y);
}
void main()
{
    int x,y ;
    printf("enter two numbers:\n");
    scanf("%d%d",&x,&y);
    addition(x,y);
}