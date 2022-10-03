#include<stdio.h>
#include<math.h>
int main()
{
    int a , fact=1;
    int  i;
    printf("enter the value");
    scanf("%d",&a);
    for (i=a;i>0;--i)
    {
        fact=fact*i;

    }
    printf("%d",fact);


    return 0;
}