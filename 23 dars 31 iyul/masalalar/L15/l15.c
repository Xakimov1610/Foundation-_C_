#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son = 5;

    for (int i = son; i >= 1; i--)
    {
        for (int j = 0; j <= son; j++)
        {
            if (j > i)
                printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}