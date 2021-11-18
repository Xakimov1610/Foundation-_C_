#include <stdio.h>
#include <stdlib.h>
int  main()
{
    int array[7];
    int k;
    for (int i=0; i<7;i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (array[i] < array[j])
            {
                k = array[j];
                array[j] = array[i];
                array[i] = k;
            }
            else {
                continue;
            }
                
         }
       
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", array[i]);
    }
    

   
    return 0;
}
