#include <stdlib.h>
#include <stdio.h>

int main()
{

    int son = 5;

    for (int i = 1; i <= son; i++)
    {
        for (int j = 1; j <= son; j++)
        {
            if (j > i)
                printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}