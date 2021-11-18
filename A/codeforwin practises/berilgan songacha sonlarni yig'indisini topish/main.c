#include <stdio.h>
#include <stdlib.h>

int main12()
{
    /*
   int son,son2=10,sum=0;


   for (son=1;son<=son2;son++)
   {
       sum+=son; //<-- == --> sum = sum+i
   }
   printf("%d",sum);

   */

   int i,start,end,sum=0;
   printf("boshlanish sonni kiriting:");
   scanf("%d",&start);
   printf("tugash sonni kiriting:");
   scanf("%d",&end);

   for (i=start;i<=end;i++)
   {
       sum+=i;
   }
   printf("%d",sum);



    return 0;
}
