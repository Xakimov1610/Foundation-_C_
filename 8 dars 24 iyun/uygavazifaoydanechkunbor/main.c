#include <stdio.h>
#include <stdlib.h>

int main()
{




while(1)
{
     int oy;
     printf("oy raqamini kiriting:");
     scanf("%d",&oy);


    switch(oy)
    {
    case 2:
        printf("28 kun bor\n");
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Kun bor\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 kun bor\n");
            break;
        default:
            printf("noto'g'ri oy raqamini kiritdiz\n");
            break;
    }
}
    return 0;
}





