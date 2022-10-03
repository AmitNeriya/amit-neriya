#include<stdio.h>
int main()
{
  int n;
  printf("enter the number  where you want to  print");
  scanf("%d",&n);



  int a[n];
for (int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for (int i=0;i<n;i++)
{
printf("%d  \n",a[i]);
}

return 0;
}