#include <stdio.h>
int fact(int n);
int main()
{
     int n, s;
    printf("enter the number");
     scanf("%d", &n);
     s = fact(n);
    printf("factorial is =%d", s);
// printf("factorial is :%d",fact(5));
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;
    return factN;
}