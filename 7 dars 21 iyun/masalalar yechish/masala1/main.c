#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bal;
    printf("BALIZNI KIRITING:");
    scanf("%d",&bal);

     if (bal <= 100 && bal >=80)
    {
        printf("Bahoyingiz 5");
    }

    else if (bal < 80 && bal>=60)
    {
        printf("Bahoyingiz 4");
    }


   else  if (bal <60 && bal >=40)
    {
        printf("Bahoyingiz 3");
    }
    else {printf("Yiqildingiz.");}



    return 0;
}


