#include <stdio.h>
int main ()
{
    int son=5;
   
    for (int i = son,b=0,f=1; i >=0; i--,b++,f++)
    {
   
       for (int j = 0; j < son; j++)
       {
         if (j<i)
          printf("  ");
       }

       for (int k = son; k >=0; k--)
       {
          if (k<=b)
          printf("%d ",k);
       }
        
          for (int h = 1; h < f; h++)
          {
             printf("%d ", h);
          }
          printf("\n\n");
      }

   
   
   

    return 0;
}