#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yigindi=0;
    for (int son=34; son<=88;son++)
    {
        if (son%2==0)
            yigindi+=son;
    }
    printf("%d\n",yigindi);
    return 0;
}
