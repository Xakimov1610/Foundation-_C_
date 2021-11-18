#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son[10]={};

   for ( int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);

       if (son[i]%2==0)
        son[i]*=2;

       else {
        son[i]-=2;}

         printf("\t%d",son[i]);
   }

    return 0;
}
