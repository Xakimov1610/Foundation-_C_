#include <stdio.h>
#include <stdlib.h>

int main()
{
    // vazifa 12 : 25 dan 690 gacha 9 ga va 5 ga bolinuvchi sonlar
    int son =25,gacha=690,sanoq=0;

    while (son < gacha)
    {
        son++;
        if ( son%5==0 && son%9==0 )
        {
            sanoq++;
        }
    }
    printf("%d ta -- 5 va 9 ga bolinuvchi sonlar",sanoq);
    return 0;
}
