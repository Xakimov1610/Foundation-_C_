#include <stdio.h>
#include <stdlib.h>

int main()
{
    //INTEGER 20
    /*
   int sekund=6050,natija,natija2;
   natija = sekund/3600;
   printf("%d soat",natija);
    */

    // 60 sekund=1minut -- 3600 sekund=1 soat
    int sekund;
    printf("sekundlarni kiriting:");
    scanf("%d",&sekund);

  printf("%d soat",sekund/3600);

   //printf("%d soat  %d minut",sekund/3600,sekund%3600/60); BU SOAT VA MINUTNI KORSATADI

    return 0;
}
