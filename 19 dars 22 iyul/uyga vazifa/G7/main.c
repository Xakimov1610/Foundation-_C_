#include <stdio.h>
#include <stdlib.h>

int son_sanoq(int son)
{
    int sanoq=1;
    for (  ; son /10 > 0; son /= 10, sanoq++)
    { 
        // buni nega yozdim ?
    //         if (son==0)
    //         sanoq++;
    }
    return sanoq;
   
}

// Foydalanuvchi butun son kiritadi. Shu sonning raqamlari 
// sonini aniqlovchi funksiya tuzing

int main()
{

    int a;
    scanf("%d",&a);

    printf("%d ta raqam bor",son_sanoq(a) );

    return 0;
}