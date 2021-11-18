#include <stdio.h>
#include <stdlib.h>

void uchga_oshir(int *Pson)
{
    *Pson+=3;
    printf("%d",*Pson);
}


int main()
{
    int son;
    scanf("%d",&son);

    uchga_oshir(&son);

    return 0;
}