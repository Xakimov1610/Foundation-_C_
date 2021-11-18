#include <stdio.h>
#include <stdlib.h>




int main()
{
   int tomon;
   printf("kvadratning tomonini kiriting:");
   scanf("%d",&tomon);



   for (int a=1;a<=tomon;a++)
   {
       for (int b=1;b<=tomon;b++)
       {
           if (a==1|| b==1 || a==tomon ||a==b||a+b==tomon+1|| b==tomon)
           {
                for (int a=0;a< 150000000;a++)
   { }
            printf(" *");

           }
           else { printf("  ");
             }
       }
       printf("\n");
   }


/*
 //     tortburchak hosil qilish
    int eni,boyi;
   printf("eni va boyini kiriting:");
   scanf("%d %d",&eni,&boyi);


   for (int a=1;a<=boyi;a++)
   {
       for (int b=1;b<=eni;b++)
       {
           if (a==1|| b==1 || a==boyi || b==eni)
            printf(" *");
           else { printf("  ");
             }
       }
       printf("\n");
   }
*/


    return 0;
}
