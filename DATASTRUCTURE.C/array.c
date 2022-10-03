//to create a array and add the elements
#include<stdio.h>
int main()
{
    int array[5];

for(int i=0;i<5;++i)
{
   printf("Enter the %d value: \n",i);
   scanf("%d",&array[i]);

}
for(int i=0;i<5;++i)
{
    printf("The array is as follows: %d \n",array[i]);
}
    return 0; 
}