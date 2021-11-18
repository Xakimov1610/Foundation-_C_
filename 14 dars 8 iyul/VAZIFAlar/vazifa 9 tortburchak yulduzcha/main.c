#include <stdio.h>
#include <stdlib.h>

int main()
{


    int boyi,eni;
    printf("boyi va enini kiriting:");
    scanf("%d %d",&boyi,&eni);

   for (int a=1; a<=eni;a++)
   {
       for (int b=1; b<=boyi;b++)
       {
           if ( a==1 || a==eni || b==1 || b==boyi)
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
// UZIM SON BERIB ISHLAGANIM
10 = BOYI VERTIKAL
15 = ENI GORIZONTAL
   for (int a=1; a<=10;a++)
   {
       for (int b=1; b<=15;b++)
       {
           if ( a==1 || a==10 || b==1 || b==15)
           {
               printf("*");
           }
           else {printf(" ");}
       }
        printf("\n");
   }

   */
