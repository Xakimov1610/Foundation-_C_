#include <stdlib.h>
#include <stdio.h>
int main()
{

    int son;
    scanf("%d", &son);

   for (int i = son; i >= 0; i--) // 4
   {
      for (int k = 1; k <= i; k++)
      {
        printf("%d",k);
      }
      printf("\n");
      }
   

    return 0;
}