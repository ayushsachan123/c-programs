//write a function to calculate the sum, product & average of two numbers. print the average in
//the main function  //
#include<stdio.h>
void both(int a, int b,int *sum,int *prod, int *avg);
int main()
{
    int a=3,b=5;
    int sum, prod, avg;
    both(a,b,&sum,&prod,&avg);
    return 0;
}

void both(int a, int b,int *sum,int *prod, int *avg)
{
    *sum = a+b;
    *prod =a*b;
    *avg = (a+b)/2;
    printf("sum is = %d\nproduct= %d\naverage = %d\n",*sum,*prod,*avg);
}