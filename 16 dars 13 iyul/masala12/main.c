#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanoq=0,yigindi=0;
    int good[8]={};

    for ( int i=0; i<8;i++)
    {
        scanf("%d",&good[i]);
    }

    for ( int i=0; i<8; i++)
    {
        if (i%2==0)
            sanoq+=i;

        else { sanoq-=i;}
    }

  /*
  // XATO ISHLANGAN

  int sanoq=0,yigindi=0;
    int good[8]={};

    for ( int i=0; i<8;i++)
    {
        scanf("%d",&good[i]);
    }

    for ( int i=0; i<8; i++)
    {
        if (good[i]%2==0)   // SHU YERDA good[i] EMAS  i ni uzi boladi !!!
            sanoq+=i;

        else { sanoq-=i;}
    }

  // uzun yo'l bop ketgan
  for (int i=0;i<8; i++)
    {
        if (good[i]%2==1)
           sanoq-=i;
    }
*/
    printf("%d\n",sanoq);















    return 0;
}
