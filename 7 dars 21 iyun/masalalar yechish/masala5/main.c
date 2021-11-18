#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* MASALANI UZUN VARIANTI
    int son=522;

    int birlar,onlar,yuzlar;
    birlar=son%10; // 5 ni oldik
    onlar=son/10%10; // 4 ni oldik
    yuzlar=son /100; // 1 ni oldik

    if (birlar >=onlar && birlar >=yuzlar )
    {
        printf("ENG KATTA RAQAM:%d\n",birlar);
    }
     else if (onlar >=birlar && onlar >=yuzlar )
    {
        printf("ENG KATTA RAQAM:%d\n",onlar);
    }
     else
    {
        printf("ENG KATTA RAQAM:%d\n",yuzlar);
    }
    */



    // MASALANING QISQA SHAKLI!!!
    int son;
        printf("3 xonalik son kiriting:");
        scanf("%d",&son);

    if (son%10 >=son/10%10 && son%10 >=son /100 )
    {
        printf("ENG KATTA RAQAM:%d\n",son%10);
    }
     else if (son/10%10 >=son%10 && son/10%10 >=son /100 )
    {
        printf("ENG KATTA RAQAM:%d\n",son/10%10);
    }
     else
    {
        printf("ENG KATTA RAQAM:%d\n",son /100);
    }



    return 0;
}
