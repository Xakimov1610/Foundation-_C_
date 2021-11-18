#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yigindi=0;
    for (int son=45;son<=120;son++)
    {
        if (son%18==0)
            yigindi+=son;
    }
    printf("%d",yigindi);
    return 0;
}
