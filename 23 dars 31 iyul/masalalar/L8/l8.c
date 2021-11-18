#include <stdio.h>

int main  ()
{
    int son=7;
  system("cls");
   for (int i = 1,f=0; i <= son; i++,f++)
    {
           for (int k = 1; k <=son; k++)   
             {
              if (k>i)
              printf(" "); 
             }

             for (int j = 1; j <=i; j++)
               {
                printf("%d",j);
               }
       
               for (int g = son; g >= 1; g--)
               {
                 if (g <= f)
                   printf("%d", g);
               }
        

        printf("\n");
    
    }


  



    return 0;
}