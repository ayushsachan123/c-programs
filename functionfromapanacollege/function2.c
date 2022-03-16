#include <stdio.h>
void namste();
void bonjour();
int main()
{
    printf("enter f for french & i for indian :");
    char a;
    scanf("%c", &a);
    if (a == 'i')
    {
        namste();
    }
    else
    {
        bonjour();
    }

    return 0;
}
void namste()
{
    printf("namste\n");
}
void bonjour()
{
    printf("bonjour");
}
