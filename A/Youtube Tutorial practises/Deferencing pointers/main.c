#include <stdio.h>
#include <stdlib.h>

int main()
{
    // deferencing pointers -- ko'rsatgichlarni ajratish

    int yosh=20;
    int * pYosh=&yosh;

    printf("%p\n",pYosh); // memory adres -- 000000000061FE14
    printf("%d\n",*pYosh); // on console -- 20
    printf("%d\n",*&yosh); // on console -- 20
     printf("%d\n",&*&yosh);  // memory adres -- 6422036
    return 0;
}
