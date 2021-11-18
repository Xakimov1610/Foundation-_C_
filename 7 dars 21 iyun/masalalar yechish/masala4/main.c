#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int son;
    printf("2 xonalik son kiriting:");
    scanf("%d",&son);
    //int birlar,onlar;

    birlar=son%10;
    onlar=son/10;
    printf("%d%d",birlar,onlar);

    printf("Natija:%d%d",son%10,son/10); */


    int son;
    printf("2 xonali son kiriting:");
    scanf("%d",&son);
    /*int son=98;
    int b,d,c;
    b=son%10;
    d=son/10;
    c=b*10+d; */

    printf("Natija:%d",son%10*10+son/10);







    return 0;
}
