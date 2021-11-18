#include<stdlib.h>
#include <stdio.h>
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

    for (int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            if (j%2==1)
            printf("%d,",son[i][j]);
        }
       // printf("\n");
    }






    return 0;
}