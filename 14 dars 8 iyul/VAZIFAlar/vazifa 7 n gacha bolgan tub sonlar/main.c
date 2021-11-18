#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son,sanoq;
    scanf("%d",&son);

    for (int i=2; i<=son;i++)
    {
        sanoq=0;
        for (int k=1;k<=i; k++)
        {
            if (i%k==0)
             sanoq++;

        }
            if (sanoq==2)
            printf("%d\n",i);

    }

    return 0;
}









