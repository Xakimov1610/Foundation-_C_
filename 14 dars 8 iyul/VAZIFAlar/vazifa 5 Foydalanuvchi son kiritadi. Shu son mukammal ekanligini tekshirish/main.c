#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son,yigindi=0;
    printf("son kiriting:");
    scanf("%d",&son);

    for (int a=1; a<son;a++)
    {
        if (son%a==0)
            yigindi+=a;
    }
        if (yigindi==son)
        {
             printf("mukammal son");
        }

        else { printf("deng");}

    return 0;
}
