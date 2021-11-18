#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long  son,sanoq=0;
   scanf("%lld",&son);

   do {

    sanoq++;
    son/=10;
   }
   while (son!=0);

   printf("%d",sanoq);









    return 0;
}
