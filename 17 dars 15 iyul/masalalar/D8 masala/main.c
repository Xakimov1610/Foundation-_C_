#include <stdio.h>
#include <stdlib.h>
// NOT COMPLETED

int main()
{
   int sanoq=0;
   int son[10] = {3, 5, 4, 0, 1, 5, 2, 3, 7, 1};
   int son2[10]={};

   /*for (int i=0; i<10;i++)
   {
       scanf("%d",&son[i]);

   }*/

   for (int i=0; i < 9; i++)
   {
        for (int j=i+1; j < 10;  j++)
        {
            if (son[i]==son[j])
               break;
            if (j==9)
            printf("%d\n",son[i]);
            //son2[i]==son[i];
        }
   }
    printf("%d",son[9]);
 

    return 0;
}
