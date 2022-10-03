//to create a function to add two numbers 
#include<stdio.h>
void amit(int *n);


int main()
{
    int i=5;
    int *y=&i;

    
  
    

    amit(y);
 
   
    return 0;
}

void amit(int *n)
{
   int t=(*n)*(*n);
   printf("The square is : %d",(t));
}