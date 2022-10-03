#include <stdio.h>
#include <time.h>
#include<math.h>
int main()
{
   int no, on, rem, n = 0;
   float result = 0.0;
   printf("Enter an Number: ");
   scanf("%d", &no);
    on = no;
   for (on = no; on != 0; ++n) {
       on /= 10;
   }
   for (on = no; on != 0; on /= 10) {
       rem = on % 10;
       result += pow(rem, n);
   }
   if ((int)result == no)
    printf("%d is an Armstrong number.", no);
   else
    printf("%d is not an Armstrong number.", no);
return 0;
}
