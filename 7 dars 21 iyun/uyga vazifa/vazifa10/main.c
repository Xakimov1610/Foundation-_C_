#include <stdio.h>
#include <stdlib.h>


int main()
{

    //INTEGER 22 masala--> sekundni soatga va qolganini sekundga aylantirish
/*
  int sekund=3665;
   int soat,seconds;

   soat=sekund/3600;
   seconds=sekund%3600;

   printf("%d minut %d sekund",minut,seconds);
*/

    int sekund;
    printf("sekundlarni kiriting:");
    scanf("%d",&sekund);

    printf("%d soat %d sekund",sekund/3600,sekund%3600);

    return 0;
}
