#include <stdio.h>
#include <stdlib.h>

int main()
{
        int son=10;
        int taxmin;
        int taxminSanoq = 0;
        int taxminTaqiq=3;
        int taxminTugash=0;


        while (taxmin!=son && taxminTugash==0)
        {
            if (taxminSanoq<taxminTaqiq)
            {

            printf("SON KIRITING:");
            scanf("%d",&taxmin);
            taxminSanoq++;
        }
        else {
            taxminTugash=1;
        }
        }
        if (taxminTugash==1)
        {
            printf("out of guesses");

        }
        else {printf("YOU WIN!!!");}

    return 0;
}
