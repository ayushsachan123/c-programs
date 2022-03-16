//*calling function by value *//
#include <stdio.h>

void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
    void main()
    {
        int m,n;
        printf("enter two numbers");
        scanf("%d%d",&m,&n);
        swap(m,n);
        printf("m=%d n=%d",m,n);
    }
