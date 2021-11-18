#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son[10]={1,2,3,4,5,6,5,8,9,10},sanoq=0;

    for ( int i=0; i<10; i++)
    {
        if (son[i]==5)
        sanoq++;

    }
    if (sanoq>=1)
        printf("bor");

    else {printf("yoq");};

    return 0;
}
