#include <stdio.h>
#include <stdlib.h>

int main()
{
    int good[8] = {5, 23, 4, 12, 0, 9, 100, 45};
printf("toq indexdagi sonlar\n");
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 1)
            printf("%d\n", good[i]);
    }


return 0;
}