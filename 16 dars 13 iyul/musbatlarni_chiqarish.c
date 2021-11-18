#include <stdlib.h>
int main()
{

    int good[8] = {5, 23, 4, 12, 0, 9, 9, 100, 45};

    for (int i = 0; i < 8; i++)
    {
        if (good[i] % 2 == 0)
            printf("%d juft son\n", good[i]);

        else
        {
            printf("%d toq son\n", good[i]);
        }
    }


return 0; }