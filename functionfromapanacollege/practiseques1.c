//use library function to calculate the square of a number given by user.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("square of the number=%f",pow(n,2));
    return 0;
}