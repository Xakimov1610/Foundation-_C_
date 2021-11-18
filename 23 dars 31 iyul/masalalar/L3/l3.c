#include <stdio.h>
#include <stdlib.h>
int main()
{

    int son;
   scanf("%d",&son);

    for (int i = son; i>=1; i--)
    {
        for (int k = i; k>=1; k--)
        {
           printf("%d",k);

        }
        printf("\n");
        }
    



    return 0;
}