#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son[10]={};

    for (int i=0; i<10 ; i++)
    {
        scanf("%d",&son[i]);
        son[i]+=10;
    }

    for ( int i=0; i<10; i++)
    {
        printf("%d\n",son[i]);
    }


    return 0;
}
