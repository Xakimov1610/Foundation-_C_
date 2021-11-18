#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son,max=0;
   printf("son:");
   scanf("%d",&son);
   max=son;

   for (int a=1;a<5;a++ )
   {

       if (son>=max)
       {
           max=son;

       }
       scanf("%d",&son);
   }
   printf("%d",max);
    return 0;
}
