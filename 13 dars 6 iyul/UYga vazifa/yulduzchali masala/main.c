#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("son:");
    scanf("%d",&c);

    for (int a=1;a<=c;a++){
        for (int b=1; b<=a;b++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}


/*
// TUSHUNISH KERE WHAT IS HAPPENING
 int c=1;
    for (int a=1;a<=2;a++){
        for (c; c<=5;c++)
        {
            printf("*\n");

        }
        printf("\n");
    }  */
