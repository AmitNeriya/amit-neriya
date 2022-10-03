#include<stdio.h>
#include<math.h>
int main()
{
 int num,count,fact=1;

     printf("enter the value");
     scanf("%d",&num); 

     for (count=1;count<=num; count++)
    {
     fact= fact*count;
    }

     printf("%d,%d",num,fact);

    








    return 0;
}

    

