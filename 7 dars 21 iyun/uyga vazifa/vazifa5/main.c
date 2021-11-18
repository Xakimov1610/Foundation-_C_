#include <stdio.h>
#include <stdlib.h>

int main()
{
            //INTEGER 15 masala


  /*          int son=123;
            int birlar,onlar ,yuzlar,natija;


        birlar=son%10; // 3 ni oldik
        onlar=son/10%10; // 2 ni oldik
        yuzlar=son /100; // 1 ni oldik
        natija=onlar*100+yuzlar*10+birlar ;//213bolishi kerak

        printf("natija:%d",natija);
*/
        int son;
        printf("3 xonalik son kiriting:");
        scanf("%d",&son);

        printf("natija:%d",son/10%10*100+son/100*10+son%10);

    return 0;
}
