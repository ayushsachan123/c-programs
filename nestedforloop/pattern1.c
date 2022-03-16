//printing reverse number//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=6-i;j++)
        {
        
        printf("%d",j);
            
         }
         printf("\n");
    }
return 0;
}