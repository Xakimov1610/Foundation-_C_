#include <stdio.h>
#include <stdlib.h>

int main()
{
   // INTEGER 12    3xonalik sonni raqamlarini teslakari qilib yozish masalasi

    /*
   int son=123;
   int birlar,onlar ,yuzlar,natija;


   birlar=son%10; // 3 ni oldik
   onlar=son/10%10; // 2 ni oldik
   yuzlar=son /100; // 1 ni oldik
   natija=birlar*100+onlar*10+yuzlar;

   printf("natija:%d",natija);
*/
        int son;
        printf("3 xonalik son kiriting:");
        scanf("%d",&son);

        printf("natija:%d",son%10*100+son/10%10*10+son /100);










    return 0;
}
