#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int son=45;son<=255;son++)
    {
        if (son%16==0 && son%48!=0)
            printf("%d\n",son);
    }
    return 0;
}
