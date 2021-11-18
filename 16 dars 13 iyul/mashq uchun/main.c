/*#include<stdlib.h>

int main(){
 // /*   int son[10]={};
    for (int i = 0; i < 10; i++)
    {
       scanf("%d",&son[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",son[i]);
    }

//
  int son[10] = {};

  for (int i = 0; i < 10; i++)
  {
      scanf("%d", &son[i]);
  }

  for (int i = 0; i < 10; i++)
  {
      if (son[0] < son[i])
          son[0] = son[i];
  }
  printf("eng katta son %d", son[0]);

  return;
}*/

#include <stdlib.h>
int main()
{
    int a,b;
    printf("ikki son:");
    scanf("%d %d",&a,&b);
    int  my_son[11] ={};
    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
     printf(" bu son:%d",b);
/*
    for (int i=0,j=0; i<11;i++,j++)
    {

        if (a==i)
        {
            my_son[i]=b;
           continue;
        }
       my_son[i]= my_array[j];

       printf("%d\n",my_son[i]);
    }
*/
    return 0;
}
