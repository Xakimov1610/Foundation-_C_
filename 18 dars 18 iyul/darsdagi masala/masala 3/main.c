#include <stdio.h>
#include<stdlib.h>
int main()
{
    int son[2][4]={};

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf("%d",&son[i][j]);
        }
    }

    for (int i=0;i<4;i++)
    {
        for (int j=0;j<2;j++)
        {printf("%d ",son[j][i]);

        }
        printf("\n");
    }

    return 0;
}