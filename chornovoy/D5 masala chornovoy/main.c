#include<stdlib.h>

int main( ){

    int son[10]={};
    int son2[10]={};

    for (int i=0; i<10;i++)
    {

        scanf("%d",&son[i]);

    }

    for (int i=0,j=14; i<10; i++,j--)
    {
        if (i<5)
        {
            son2[i]=son[i];
        }
        else  {

            son2[i]=son[j];

        }
         printf("%d\n",son[i]);
        /* if (j==9)
            printf("%d\n",son[j]);*/
    }




    return 0;
}
