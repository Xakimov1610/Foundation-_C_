#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int son=62;son<=112;son++)
    {
        if (son%9==0 &son%11!=0)
            printf("%d\n",son);
    }
    return 0;
}
