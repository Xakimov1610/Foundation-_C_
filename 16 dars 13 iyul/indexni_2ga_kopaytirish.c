#include <stdio.h>
#include <stdlib.h>

int main()
{
    int good[8] = {};

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &good[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", good[i] * 2);
    }

    return 0;
}