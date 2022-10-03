#include<stdio.h>
int main ()
{
    int i,u,a;
        printf("enter the rows ");
        scanf("%d",&u);
      
        for (i=1;i<=u;i++)
        {
        for (a=u-1;a>=i;a--)
        {
        printf(" ");
        }
    
      for(int j=1;j<=i;j++)
       {
        printf("* ");
       }
       printf("\n");
        }
    
    return 0;
}
