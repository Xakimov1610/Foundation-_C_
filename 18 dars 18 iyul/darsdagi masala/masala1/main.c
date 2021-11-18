#include<stdlib.h>
int main()
{

    int son[3][4]={};


    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf("%d",&son[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", son[i][j]);
        }
        printf("\n");
    }

    return 0;
}