#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son = 5;

    for (int i = 1; i <= son; i++)
    {
        for (int j = 1; j <= son; j++)
        {
            if (i == 1 || i == son || j == 1 || j == son)
                printf("1");
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
