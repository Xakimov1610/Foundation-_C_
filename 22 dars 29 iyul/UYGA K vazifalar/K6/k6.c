#include <stdlib.h>
#include <stdio.h>

int raqam_alish(int *sonManzili)
{
   *sonManzili=*sonManzili%10 * 10 +*sonManzili/10;
    
    return *sonManzili;
    // 12=12%10 =2
    // 12/10=1
}

int main ()
{

    int son=12;

    printf("%d",raqam_alish(&son));



    return 0;
}