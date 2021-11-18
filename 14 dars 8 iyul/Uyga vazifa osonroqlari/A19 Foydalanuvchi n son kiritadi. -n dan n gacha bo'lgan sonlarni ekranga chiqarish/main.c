#include <stdio.h>
#include <stdlib.h>

int main()
{



   int son,a,b;
   printf("son:");
   scanf("%d",&son);

   for ( int c=-son;c<=son;c++)
   {
       printf("%d\n",c);
   }
return 0;
}









    /*
   int son,a,b;
   printf("son:");
   scanf("%d",&son);

    if (son>0)
    {
    b=son * (-1);
    for ( ;b<=son;b++)
   {
       printf("%d\n",b);
   }
    }

   else if (son==0)
        printf( "0");

    else
        {printf("musbat son kiriting");}

    return 0;
}

*/

/*
        // BOSHQACHA CHIQADI CONSOLEDA ,RUN QILIB KORING
    if (son>0)
    {
    b=son * (-1);
    for ( ;son>=b;son--)
   {
       printf("%d\n",son);
   }
    }
  else if (son<0)
  {
   a=abs(son);

    for ( ;son<=a;son++)
   {
       printf("%d\n",son);
   }

  }
  else {printf( "0");}
*/
