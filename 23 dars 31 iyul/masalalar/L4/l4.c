#include <stdlib.h>
#include<stdio.h>

int main ()
{

    int son=5;

    for (int i = 1; i <=son ; i++)
    {
        for (int k = son; k >=i ; k--)
        {
            printf("%d",k);
        }
        printf("\n");
        }
    



return 0;
}