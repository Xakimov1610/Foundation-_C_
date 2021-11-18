#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son[10]={},sanoq=0;


    for ( int i=0; i<10; i++)
    {
        scanf("%d",&son[i]);

        if (son[i]==7)
            sanoq++;
    }
    if (sanoq>=1)
        printf("bor");
    else {printf("yoq");}
    return 0;
}
