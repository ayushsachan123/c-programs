#include<stdio.h>
int main()
{
    float price= 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("value of *pptr is %f\n ",*ptr);
       printf("value of **pptr is %f ",**pptr);
    return 0;
}
