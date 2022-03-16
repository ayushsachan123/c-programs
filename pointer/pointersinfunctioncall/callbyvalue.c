// call by value //
#include<stdio.h>
void square(int n);
int main()
{
    int n=5;
    square(n);
    printf("number is = %d",n);
    return 0;
}
void square(int n)
{
    n=n*n;
    printf("square=%d\n",n);
}