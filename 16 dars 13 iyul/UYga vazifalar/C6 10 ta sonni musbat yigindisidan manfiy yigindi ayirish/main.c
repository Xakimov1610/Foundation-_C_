#include <stdio.h>
#include <stdlib.h>

int main()
{

   int son[10]={};
    int manfiy=0,musbat=0,yigindi=0;
   for ( int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);

       if (son[i]<0)
        manfiy+=son[i];

       if (son[i]>0)
        musbat+=son[i];

        yigindi=musbat-manfiy;

   }

   printf("%d\n",musbat);
   printf("%d\n\n",manfiy);
   printf("%d\n",yigindi);

    return 0;
}
