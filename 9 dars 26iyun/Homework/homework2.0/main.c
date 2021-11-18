#include <stdio.h>
#include <stdlib.h>

int main()
{
    // vazifa 10 :50 dan 440 gacha 11 ga bolinadigan sonlar
    int son=50,gacha=440,sanoq=0;

    while (son<gacha)
    {
        son++;
        if (son%11==0)
        {
            printf("%d\n",son);
        }
    }

    return 0;
}
