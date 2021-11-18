#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int son=7;son<=78;son++)
    {
        if (son%2==0 && son%3==0 && son % 5==0)
            printf("%d\n",son);
    }
    return 0;
}
