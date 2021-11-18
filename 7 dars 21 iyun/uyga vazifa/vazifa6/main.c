#include <stdio.h>
#include <stdlib.h>

int main()
{

    // INTEGER 16 masala

/*
              int son=123;
            int birlar,onlar ,yuzlar,natija;


        birlar=son%10; // 3 ni oldik
        onlar=son/10%10; // 2 ni oldik
        yuzlar=son /100; // 1 ni oldik
        natija=yuzlar*100+birlar*10+onlar;//132 bolishi kerak

        printf("natija:%d",natija);
*/
        int son;
        printf("3 xonalik son kiriting:");
        scanf("%d",&son);

        printf("natija:%d",son/100*100+son%10*10+son/10%10);

    return 0;
}
