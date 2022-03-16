#include <stdio.h>
#include <math.h>
  int main() 
  {
      int x,y,c;
      printf("my simple calculator\n");
      printf("1. add\n");
      printf("2.sub\n");
      printf("3.mul\n");
      printf("4.divide\n");
      printf("enter your choice(1-4):\n");
      scanf("%d",&c);
      printf("Enter two numbers:-\n");
      scanf("%d%d",&x,&y);
      switch (c)
      {
      case 1 :/* constant-expression */
          /* code */
          printf("add.= %d",x+y);
          break;
          case 2 :
          printf("sub.= %d",x-y);
          break;
          case 3:
          printf("mul.= %d",x*y);
          break;
          case 43:
          printf("div.= %d",x/y);
               break;
               default:
               printf("wrong choice");
               }

    return 0;
  }