#include<stdio.h>
#include<string.h>
int main()
{
char str1[20];
char str2[20];
printf("Enter the first string:");
scanf("%s",str1);
int x=strlen(str1);

printf("Enter the second string:");
scanf("%s",str2);
int f ;
for(int i=0;i<x;++i)
{
if(str1[i]==str2[i])
{  f=1;̀
}
else if(str1[i]!=str2[i])
   {
    
     printf("The strings are disimiler");
    break;  
   }
   else
     continue;
}
    if(f==1)
    {
          printf("The strings are identical:");
    }
return 0;
}