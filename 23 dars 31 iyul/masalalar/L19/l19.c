#include <stdio.h>

int main()
{

    int son=5;

    for (int i = 1; i <= son; i++)
    {
        for (int j = 1; j <=son; j++)
        {
            if(i<=son && j<=i)
            printf("%c",64+j);
        }
        printf("\n");
        }
    

    return 0;
}