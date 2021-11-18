#include <stdio.h>

int main()
{

   system("cls");

    int son=5;

    for (int i = son,h=1,a=son; i >=1; i--,h++,a--)
    {
      for (int j = 1; j <=i; j++)
      {
       printf("%c",64+j);
      }
//
      for (int f = son; f > 1; f--)
      {
         
          if (f <= h)
              printf("  ");
           
            
      }

      for (int k = a; k >= 1; k--)
      {
        //   if (k==i && k==5)
        //     continue;
          printf("%c", 64 + k);
      }

      printf("\n");
        }
//
    // for (int h = 1,a=son; h <= son; h++,a--)
    // {
    //     for (int f = son; f > 1 ; f--)
    //     {
    //         if (f<=h)
    //              printf(" ");
    //     }
        
    //     for (int k = a; k >=1; k--)
    //     {
    //         printf("%c",64+k);
    //     }
    //     printf("\n");
       
        
    //  }
    
    

    return 0;
}