#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hafta_kunlari;
    printf("hafta kuni tartib raqamini kiriting:");
    scanf("%d",&hafta_kunlari);

   switch(hafta_kunlari)
    {
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
    default:
        printf("noto'g'ri raqam kiritdingiz!\n");
    break;
        }



    /*

         switch(hafta_kunlari)
    {
    case 1:

    case 2:

    case 3:

    case 4:

    case 5:
        printf("ish kuni\n");
        break;
    case 6:

    case 7:
        printf("dam olish kuni\n");
        break;
    default:
        printf("noto'g'ri raqam kiritdingiz!\n");
    break;
        }

       */
    return 0;
}
