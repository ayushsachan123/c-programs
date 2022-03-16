//*fabonacci series*//
#include<stdio.h>
void main()
{
  int n,i,r;
  printf("enter no. of terms:");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
 {
    /* code */
    r=fibo(i);
    printf("%d",r);
 }
 return 0;
}