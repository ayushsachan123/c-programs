// print the valueof 'i' from its pointer to pointer
#include<stdio.h>
int main()
{
    int i=5;
    int *ptr=&i;
    int **pptr = &ptr;
    printf("vale of **pptr =%d",**pptr);
    return 0;
}