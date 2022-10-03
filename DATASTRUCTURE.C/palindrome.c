#include <stdio.h>
int main()
{
  int num,rev=0,rem,copy;
printf("enter the number");
scanf("%d",&num);
copy=num;
while (num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
if (rev==copy)
{
    printf("its a palindrome");
}
else 
{
  printf("its not a palindrome ");
}
return 0;
}