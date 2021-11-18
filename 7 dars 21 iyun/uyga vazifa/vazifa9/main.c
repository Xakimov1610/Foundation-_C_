#include <stdio.h>
#include <stdlib.h>


int main()
{
    // INTEGER 21 masasa --> sekundni minutga aylantirish va qolgan sekundini chiqarish
    /*
   int sekund=65;
   int minut,seconds;

   minut=sekund/60;
   seconds=sekund%60;

   printf("%d minut %d sekund",minut,seconds);
*/
    int sekund;
    printf("sekundlarni kiriting:");
    scanf("%d",&sekund);


    printf("%d minut %d sekund",sekund/60,sekund%60);
    return 0;
}
