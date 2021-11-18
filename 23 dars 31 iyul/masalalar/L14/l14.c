#include <stdlib.h>
#include <stdio.h>
int main()
{
    int son=5;

    for (int i = son; i >=1; i--)
    {
      for (int j = 1; j <=i; j++)
      {
         printf("*");
         
      }
      printf("\n");
        }
    




    return 0;
}