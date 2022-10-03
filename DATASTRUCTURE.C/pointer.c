//to create and implement pointers
#include<stdio.h>
int main()
{
  int a=5;
  int *x=&a;
  int **ptr=&x;
  printf("the address is  %d",**ptr);






    return 0;
}