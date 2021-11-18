#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char soz[15];
    printf("o'yinni davom ettirrasizmi [ha/yoq]:");
    scanf("%s",&soz);


    for ( ; soz!='ha'; )
    {
        if (strcmp('ha'==soz!=0) )
            {
                printf("o'yinni davom ettirrasizmi [ha/yoq]:");
                scanf("%s",&soz);
            }
            else if (strcmp('yoq'==soz!=0) )
                     {
                         printf("tugatildi");
                         break;
                     }
    }

*/
 // XATO CHIQQAN
    char b[15],a[10]="ha",c[10]="yoq";
    printf("o'yinni davom ettirasmi[h/y]:");
    scanf("%s",&b);


    for ( ; ; )
    {


    if (strcmp(a,b)==0 )
    {
        printf("o'yinni davom ettirasmi [h/y]:");
        scanf("%s",&b);
    }



    else if (strcmp(c,b)==0)
    {
        printf("o'yin tugatildi!");
        break;
    }

    }





    return 0;
}
