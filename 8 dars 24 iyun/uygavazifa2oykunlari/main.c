#include <stdio.h>
#include <stdlib.h>

int main()
{
     int oy_kunlari;
     printf("oy raqamini kiriting:");
     scanf("%d",&oy_kunlari);



     switch(oy_kunlari)
     {
     case 12:
     case 1:
     case 2:
        printf("qish");
        break;
     case 3:
     case 4:
     case 5:
            printf("bahor");
            break;
     case 6:
     case 7:
     case 8:
        printf("yoz");
        break;
     case 9:
     case 10:
     case 11:
        printf("kuz");
        break;
     default:
        printf("notogri raqam kiritdingiz!");
            break;
     }

    return 0;
}
