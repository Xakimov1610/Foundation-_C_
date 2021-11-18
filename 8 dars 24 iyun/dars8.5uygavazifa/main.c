#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret_son =15;
    int son;
    printf("biror sonni kiriting:");
    scanf("%d",&son);

    while (secret_son !=son)
    {
        if (secret_son < son)
        {
            printf("kichikroq son kiriting:");
            scanf("%d",&son);
        }
        else if (secret_son > son )
        {
            printf("kattaroq son kiriting:");
            scanf("%d",&son);
        }
       /* else {
                printf("notogri belgi!!!");
        } */
    }
     printf("TOPDINGIZ!!!");

    return 0;
}

