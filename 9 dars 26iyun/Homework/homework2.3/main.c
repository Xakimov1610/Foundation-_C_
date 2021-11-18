#include <stdio.h>
#include <stdlib.h>

int main()
{
    // vazifa 13: 1  dan 4000gacha bolgan sonlar ichida 11, 3,9 ga bolinuvchi sonlari ekranga chiqarish
   int son= 1,gacha=4000,sanoq=0;


    while(son<gacha)
    {

        son++;
        if (son %11==0 && son %9 ==0 && son%3==0)
        {
            sanoq++;
        }
    }
    printf("%d ta son---- 11,3,9 ga bo'linadi");


    return 0;
}
