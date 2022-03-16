//call by reference//
#include<stdio.h>
void _square(int *n);
int main()
{
    int n=4;
      printf("n is = %d\n",n);
    _square(&n);
    printf("n is = %d",n);
    return 0;
}
void _square(int *n)
{
 *n = (*n) *(*n);
    printf("square= %d\n",*n);
}
