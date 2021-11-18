#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a,b;
    printf("ikki son:");
    scanf("%d %d",&a,&b);
    int  my_son[11] ={};
    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};

    for (int i=0; i<11;i++)
    {

     
         if (a>i)
        {
            my_son[i] = my_array[i];
        }
        else if (a == i)
        {
            my_son[i] = b;
        }
      else {
          my_son[i] = my_array[i-1];
      }

       printf("%d\n",my_son[i]);
    }

    return 0;
}