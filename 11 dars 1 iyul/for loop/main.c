#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*    for (int son=1; son<=20;son++)
 {
     printf("%d\n",son);
 }  */
/*
int sanoq=1;
   for  (int son=1;son<=30;son++)
   {
       if (son%2==0)
       {
          // printf("%d\n",son);

       }
   }
   printf("%d",sanoq);
   */

   /*
   for (int son=30;son<=80;son++)
   {
       if (son%2==1)
       {
           printf("%d\n",son);
       }
   }
   */
   int a,b;
   scanf("%d %d",&a,&b);

   for (a; a<=b; a++)
   {
      if (a %5==0)
      {
          printf("%d\n",a);
      }
   }

    return 0;
}
