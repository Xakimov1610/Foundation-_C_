#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son[10]={},sanoq=0;

   for ( int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);
       sanoq+=son[i];
   }
   printf("%d",sanoq/10);
    return 0;
}
