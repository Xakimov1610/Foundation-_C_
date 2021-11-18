#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int son=29; son<=55; son++)
    {
        if (son%6==0)
            continue;

        printf("%d\n",son);
    }
    return 0;
}
