#include <stdio.h>
int main()
{
    int son = 6;

    for (int i = 0; i <= son; i++)
    {
        for (int j = 0; j <= son; j++)
        {
            if (j > i)
                printf(" ");
        }
        for (int k = 6; k >= 1; k--)
        {
            printf("%d ", k);
        }
        //   for (int f = 0; f <i; f++)
        //   {
        //      printf("%d",f);
        //   }

        printf("\n");
    }

    return 0;
}