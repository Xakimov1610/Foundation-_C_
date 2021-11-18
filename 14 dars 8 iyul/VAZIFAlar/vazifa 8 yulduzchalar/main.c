#include <stdio.h>
#include <stdlib.h>

int main()
{

    int eni,boyi;
    printf("eni va boyini kiriting:");
    scanf("%d %d",&eni,&boyi);

   for (int a=1; a<=boyi;a++)
   {
       for (int b=1; b<=eni;b++)
       {
           if ( a==1 || a==boyi || b==1 || b==eni)
           {
               printf("*");
           }
           else {printf(" ");}
       }
        printf("\n");
   }

    return 0;
}

/*
  // ichi to'la tortburchak
    int a,b;
    printf("2 ta son:");
    scanf("%d %d",&a,&b);

   for (int son=1;son<=b; son++)   // boyiga nechta * chiqishi
   {
       for (int raqam=1; raqam<=a; raqam++)  // eniga nechta * chiqishi
       {
           printf("*");
       }
       printf("\n");
   }
*/
