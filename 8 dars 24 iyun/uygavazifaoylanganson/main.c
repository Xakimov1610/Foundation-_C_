#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret_number=14;
    int son;
    printf("biror sonni taxmin qiling:");
    scanf("%d",&son);
    while (son!=secret_number)
    {
        if (son<secret_number)
        {
            printf("kattaroq son kiriting:");
            scanf("%d",&son);
        }
        else if (son>secret_number)
        {
            printf("kichikroq son kiriting:");
            scanf("%d",&son);
        }
       // else {printf("notogri son kiritdingiz!");}
    } printf("TABRIKLAYMIZ TOPDINGIZ!!!");
    return 0;
}
