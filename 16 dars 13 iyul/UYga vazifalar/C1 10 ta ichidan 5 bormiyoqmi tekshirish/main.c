#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son[10] = {};

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &son[i]);
    }
   
   for (int i = 0; i < 10; i++)
   {
      if  (son[i]==5){
      printf ("bor");
      break;
      }
      if  (i==9)
      printf ("yoq");
   }
   

 
    return 0;
}


/*int main()
{
    // qiyin yoli
   int besh=0, son[10]={};

   for (int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);

       if (son[i]==5)
        besh++;
   }
   /*
   //XATO ISHLAGANMAN BUNI ISHLATMANG
   for (int i=0; son[i]<10;son[i]++)
    {
        if (son[i]==son2)
            besh++;
    }

    if (besh>=1)
        printf("bor");
    else if (besh==0){printf("yoq");}

    return 0;
}
*/