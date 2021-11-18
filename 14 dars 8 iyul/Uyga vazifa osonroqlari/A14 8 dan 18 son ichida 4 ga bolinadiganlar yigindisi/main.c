#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanoq=0;
   for (int son=8; son<=18;son++)
   {
       if (son%4==0)
        continue;

       //printf("%d\n",son);
       sanoq+=son;
   }
   printf("%d",sanoq);
    return 0;
}
