//printing reverse *//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=(n+1)-i;j++)  //j=n;j>=i;j--
        {
        
        printf("*");
            
         }
         printf("\n");
    }
return 0;
}