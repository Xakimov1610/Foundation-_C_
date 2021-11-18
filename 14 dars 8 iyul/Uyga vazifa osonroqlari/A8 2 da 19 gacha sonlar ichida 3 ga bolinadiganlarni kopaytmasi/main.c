#include <stdio.h>
#include <stdlib.h>

int main()
{

    int yigindi=1;
    for (int son=2;son<=19;son++)
    {
        if(son%3==0)
            yigindi*=son;
    }
    printf("%d\n",yigindi);
    return 0;
}
