#include <stdlib.h>
#include <stdio.h>
int main()
{
    int son[11]={};
    int son2[11]={};
  

    for (int i=0;i<11;i++)
    {
        scanf("%d",&son[i]);
       son2[i]=son[i];

    }

    for (int i=0,j=10;i<11;i++,j--)

    {

        if (i%2==0)
        {
            printf("%d ", son2[i]);
        }
       else {
          
           printf("%d ", son2[j]);
       
       }
       
       
    }

    return 0;
}