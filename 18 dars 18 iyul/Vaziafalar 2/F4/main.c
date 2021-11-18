#include <stdio.h>
#include <stdlib.h>

int main()
{

    char soz[8]="aabbcc";
    char soz2[8]="aabbcc";
    int a=0;

    for (int i = 0; i< 8; i++)
    {
      if (soz[i]!=soz2[i])
      a++;
    }
    if (a==0)
    printf("teng");
    else{
        printf("teng emas");
    }
    



    /* foydalanuvchi ikki string kiritadi
    shu stringlar tengligini tekshiring*/

    return 0;
}