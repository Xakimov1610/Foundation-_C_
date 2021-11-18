#include <stdio.h>

int main ()
{
//  FOUND finally
    int son=5;
                                  
    for (int i = 1,b=5; i <=son; i++,b--)
    {
       for (int j = 1; j <= i; j++)
       {
          printf("%d",j);
       }
       printf("\n");
    }


      for (int f= son; f >=1; f--)
      {
         for (int k = 1; k < f; k++)
         {
            printf("%d", k);
         }
         printf("\n");
      }
      
        

         return 0;
}