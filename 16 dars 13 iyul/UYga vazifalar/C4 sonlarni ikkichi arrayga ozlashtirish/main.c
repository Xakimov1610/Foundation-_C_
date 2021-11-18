#include <stdio.h>
#include <stdlib.h>

int main_12()
{
    int son[10]={},son2[10]={};

    for (int i=0; i<10; i++)
    {
        scanf("%d",&son[i]);
         son2[i]=son[i];
         printf("\n%d",son2[i]);
    }

    return 0;
}







int main()
{

    int user;
    scanf ("%d",&user);
    int son[10]={3,5,-4,0,15,88,-2,9,7,1},son2[9]={};

    for (int i=0; i<10; i++)
    {
        //scanf("%d",&son[i]);

          if (i==user)
            i==i++;
          continue;


         son2[i]=son[i];

    }
    for (int i=0;i<9; i++)
    {
        if (i==user)
         //   continue;

        printf("\n%d",son2[i]);
    }

    return 0;
}
