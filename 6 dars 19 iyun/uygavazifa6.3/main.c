#include <stdio.h>
#include <stdlib.h>

int main()
{

    // KABISA YILINI TOPISH
    int a;
    printf("SON kiriting:");
    scanf("%d",&a);

      if (a%100==0)
    {
        printf("oddiy yil");
    }
    else if (  a%4==0 || a%400==0 )
    {
        printf("kabisa yil");
    }

    else {
        printf("kabisa yil emas");
    }












/*
     int yil;
     printf("SON kiriting:");
    scanf("%d",&yil);

    if ( yil % 4==0 || yil % 400 ==0)
    { printf("kabisa yili");}

    else {printf("oddiy yil");}

    */
    return 0;
}
