#include <stdio.h>
#include <stdlib.h>

int main()
{
    // SOLVED
   int son[10]={};
    //int son2[10]={};
   for (int i=0; i<10; i++)
   {
        scanf("%d",&son[i]);
   }

   for (int i=0; i<10;i++)
   {
       if (i==1 || i==3 || i==5 || i== 7 || i==9)
        continue;
       printf("%d\n",son[i]+son[i+1]);

   }







   /*
   for (int i=0,m=1; i<10,m<10; i+2,m+2)
   {
       printf("%d\n",son[i]+ son2[m]);
   }*/
    return 0;
}
