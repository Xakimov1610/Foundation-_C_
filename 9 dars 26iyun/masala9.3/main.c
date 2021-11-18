#include <stdio.h>
#include <stdlib.h>

int main()
{
// JUFT SONLARNI TOPISH
    int son=0;
    int sanoq=0;

    while(son<=123)
    {

        if (son%2==0)
        {
            sanoq++;
        }
        son++;

    }
    printf("natija:%d\n",sanoq);


// USER KIRITADIGAN - TOQ SONLARNI HISOBLASH

/*
    int user;
    int son=0;
    int sanoq=0;
    printf("son kiriting:");
    scanf("%d",&user);
    while(son<=user)
    {

        if (son%2==1)
        {
            sanoq++;

        }
        son++;

    }
    printf("natija:%d\n",sanoq);


*/


    return 0;
}
