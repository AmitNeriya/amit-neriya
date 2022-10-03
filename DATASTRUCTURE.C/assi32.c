#include<stdio.h>


int main()
{ int size1,size2,i;
printf("enter array 1 elements :");
scanf("%d",&size1);

printf("enter array 2 elements :");
scanf("%d",&size2);
int array1[size1];
int array2[size2];
int size3=size1+size2;
int array3[size3];

for(i=0;i<size1;i++)
{
    printf("enter the value: ");
    scanf("%d",&array1[i]);
   
}
for(i=0;i<size2;i++)
{
    printf("enter the value: ");
    scanf("%d",&array2[i]);
   
}

int index;
for(i=0;i<size1;i++)
{
    array3[i]=array1[i];
    index=i+1;
}
for(i=0;i<size2;i++)
{
    array3[index]=array2[i];
    ++index;
}
for(i =0;i<size3;i++)
{
    printf("The  merged value is : %d \n",array3[i]);
}


  return 0; 
}
