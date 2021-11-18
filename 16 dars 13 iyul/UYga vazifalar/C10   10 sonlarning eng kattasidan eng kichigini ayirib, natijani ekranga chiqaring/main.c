#include <stdio.h>
#include <stdlib.h>

int main()
{
// SOLVED
    int son[10]={};

    for ( int i=0; i<10; i++)
    {
        scanf("%d",&son[i]);
    }

    for (int i=0; i<10; i++)
    {
        if (son[0]<son[i])
            son[0]=son[i];


       if (son[1]>son[i])
            son[1]=son[i];
    }
    printf("%d",son[0]-son[1]);






    return 0;
}
