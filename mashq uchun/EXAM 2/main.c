#include <stdio.h>
#include <stdlib.h>

// void nech_xona(int son)
// {
//     int sanoq=1;
//     for (int i = 0; son / 10 > 0; sanoq++,son/10)

//     printf("%d",sanoq);
// }


int main(){
    int son=123;


    //nech_xona(son);
    int sanoq = 1;
    for (int i = 0; son / 10 > 0; i++)
    {

         son / 10;
         sanoq++;
    }

        printf("%d",sanoq);




        return 0;
        }
