#include <stdio.h>
#include <stdlib.h>

int main()
{

     int yil;
   printf("yini kiriting:");
   scanf("%d",&yil);

    if (yil %4==0)//1-if
   {
    if (yil%100==0) //2-if
       {
    if (yil %400==0) //3-f
           {
               printf("kabisa yili");
           }
    else { printf("oddiy yil"); } //3-if ni else
       }
    else {printf("kabisa yil");} //2-ifni else
   }
    else { printf("oddiy yil"); } //1-ifni else


    return 0;
}






        // BIRINCHI YECHGANIM!!!
  /*
   int yil;
   printf("yini kiriting:");
   scanf("%d",&yil);

   if (yil %4==0)
   {
       if (yil%100==0)
       {
          if (yil %400==0)
          {
              printf("kabisa yili");
          }
          else {printf("oddiy yil");}
       }
       else {printf("kabisa yil");}

   }
   else {printf("oddiy yil");}

    */


