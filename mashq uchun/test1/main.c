#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int a=4,b=2;
    if (a%2+b%2==0)
    {
        printf("true");
    }
    else {
        printf("false");
    }

*/




    int son=5;

    for(int i=1;i <= son;i++)
    {
        for(int j=1;j<=son;j++)
        {
            if (i==1||i==son||j==1||j==son)
                printf("1");
                else{
                    printf("0");
                }
        }
        printf("\n");

    }
    return 0;
}
