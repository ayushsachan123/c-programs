#include <stdio.h>
void table(int x);
int main()
{
    int n, s;
    printf("enter the number for which you want table:");
    scanf("%d", &n);
    table(n);  // argument/ actual parameter

    return 0;
}
void table(int x) //parameter/ formal parameter
{
    int i;
    for ( i = 1; i <=10; i++)
    {
        printf("%d",i*x);
        printf("\n");
    }
    
}