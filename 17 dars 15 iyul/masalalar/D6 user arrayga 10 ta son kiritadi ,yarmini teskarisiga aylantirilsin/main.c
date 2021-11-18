#include<stdlib.h>
#include <stdio.h>
int main( ){

    int son[10]={};
    int son2[10]={};

    for (int i=0; i<10;i++)
    {

        scanf("%d",&son[i]);

        //printf("%d\n",son[i]);
    }

    for (int i=0,j=9; i<10; i++)
    {
        if (i<5)
        {
            son2[i]=son[i];
        }
        else  {

            son2[i]=son[j];
            j--;
        }
      
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", son2[i]);
    }

        return 0;
}