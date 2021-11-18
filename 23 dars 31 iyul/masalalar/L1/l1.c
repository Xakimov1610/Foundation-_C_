#include <stdio.h>
#include <stdlib.h>

int main()
{

    int son;
    scanf("%d",&son);

    for (int i = 1; i <= son; i++)
    {
       for (int k = 1; k <= i; k++)
       {
          printf("%d",k);
       }
       printf("\n");
     }
    




    return 0;
}