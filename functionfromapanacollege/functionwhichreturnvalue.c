#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a, b, s;
    printf("enter the numbers which you want to add:");
    scanf("%d%d", &a, &b);
    s = sum(a, b);
    printf("your sum is =%d",s);

    return 0;
}
int sum(int x, int y)
{
    return x + y;
}