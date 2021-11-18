#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("array nechta bo'lsin:");
   scanf("%d",&n);

    int son[]={};

   for (int i=0;i < n ;i++)
   {
       scanf("%d",&son[i]);

   // printf("%d\n",son[i]);
   }
  // int hajm=sizeof(son)/sizeof(son[0]);

    for (int i=0; i<hajm;i++)
    {
        printf("%d\n",son[i]);
    }


    return 0;
}
