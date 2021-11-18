#include <stdio.h>
#include <stdlib.h>

int main()
{
   int besh=0,on=0,son[10]={};

   for (int i=0;i<10;i++)
   {
       scanf("%d",&son[i]);

       if (i<5)
        besh+=son[i];
      else{
        on+=son[i];
      }
   }


   printf("%d",besh-on);
  /* printf("%d\n",besh);
   printf("%d\n",on);*/
    return 0;
}


/*
int main()
{
  int son[10] = {};

  for (int i = 1; i < 10; i++)
  {
    scanf("%d", &son[i]);

    if (i < 5)
      son[0] += son[i];

    else {
      son[0] -= son[i];
    }
  }
 printf("natija:%d",son[0]);

 
  return 0;
}
*/

