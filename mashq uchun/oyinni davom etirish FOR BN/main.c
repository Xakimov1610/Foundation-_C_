#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;



   for ( ; a!='y'; )
   {
       printf("o'yinni davom ettirasizmi:");
       scanf("%c",&a);

       if (a=='h')
       {
       scanf("%c",&a);
       }
   }
   printf("deng");
    return 0;
}
