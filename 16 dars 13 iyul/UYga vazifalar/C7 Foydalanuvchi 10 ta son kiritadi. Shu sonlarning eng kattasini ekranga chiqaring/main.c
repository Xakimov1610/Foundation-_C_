#include <stdio.h>
#include <stdlib.h>
int main()
{

   int son[10]={};

   for (int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);
   }

   for (int i=0; i<10;i++)
   {
       if (son[0]<son[i])
        son[0]=son[i];
   }
    printf("%d",son[0]);

    return 0;
}
