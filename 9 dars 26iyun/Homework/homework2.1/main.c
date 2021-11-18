#include <stdio.h>
#include <stdlib.h>

int main()
{
    // vazifa 11 : 90 dan 210 dan 25 bolinadigan sonlar
    int son=90,gacha = 210,sanoq=0;

    while (son<gacha)
    {
        son++;
        if (son%25==0)
        {
            printf("%d\n",son);
        }
    }

    return 0;
}
