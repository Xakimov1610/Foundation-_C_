#include <stdlib.h>
#include <stdio.h>

int kvadrat(int *sonM)
{
    return *sonM * *sonM;
}
int main()
{
    int son;
    scanf("%d",&son);
    printf("%d",kvadrat(&son));

    return 0;
}
