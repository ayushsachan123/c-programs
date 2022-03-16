#include<stdio.h>
void gst(float x);
int main()
{
    int n;
    printf("enter the price want to add gst:");
    scanf("%d",&n);
    gst(n);
    return 0;
}
void gst(float x)
{
    x=x + (x*0.18);
    printf("price with gst=%f",x);
}