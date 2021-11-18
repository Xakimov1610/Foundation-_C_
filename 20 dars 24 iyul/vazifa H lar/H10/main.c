#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_tekari(float array[5],float array2[5])
{
    int sanoq=0;

    printf("array 1:");
    for (int i = 0; i < 5; i++)
    {
       scanf("%f",&array[i]);
    }
    printf("\narray 2:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f",&array2[i]);
    }
    
    
    for (int i =0,k=4; i<5; i++,k--)
    {
        if (array[i]!=array2[k])
            return false;
    }
    
    return true;
}

int main()
{
    float array[5];
    float array2[5];

    printf( is_tekari(array,array2) ? "true" : "false");


    return 0;
}