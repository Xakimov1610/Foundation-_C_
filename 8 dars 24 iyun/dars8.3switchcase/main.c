#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hafta_kuni;

    printf("hafta raqamini kiriting:");
    scanf("%d",&hafta_kuni);

    switch (hafta_kuni) {
        case 1:
            printf("dushanba\n");
            break;
        case 2:
            printf("seshanba\n");
            break;
        case 3:
            printf("chorshanba\n");
            break;
        case 4:
            printf("payshanba\n");
            break;
        case 5:
            printf("juma\n");
            break;
        case 6:
            printf("shanba\n");
            break;
        case 7:
            printf("yakshanba\n");
            break;
        default:
            printf("Bunday kun yo'g'u");







    }
    return 0;
}
