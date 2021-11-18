#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 TA SONNING BIRLIK O'NLIK YUZLIGINI TOPING.

    int son;
    printf("3 xonali son kiriting:");
    scanf("%d",&son);

    //652

    printf("birlar xonasidagi son:%d\n",son%10); //2
    son=son /10;
    printf("onlar xonasidagi son:%d\n",son %10); //65

    printf("yuzlar xonasidagi son:%d\n",son / 10); //6




    return 0;
}
