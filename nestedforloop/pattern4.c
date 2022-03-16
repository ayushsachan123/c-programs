#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,l;
    printf("enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (l=1;l<=(n+1)-i;l++)
        {
            printf("%d",l);
        }
          for (j=0;j<=(2*i)-2;j++)
          {
              printf(" ");
          }
          for (k=(n+1)-i;k>=1;k--)
          {
              printf("%d",k);
          }
         printf("\n");
    }
return 0;
}