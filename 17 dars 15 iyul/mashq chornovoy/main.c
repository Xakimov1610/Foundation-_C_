#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanoq = 0;
    int son[10] = {};
    int son2[10]={};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &son[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {

        for (int j = 1; j < 10; j++)
        {
            if (son[i] != son[j])
                son2[i]=son[i];
                
        }
            printf("%d ", son[i]);
    }

    return 0;
}