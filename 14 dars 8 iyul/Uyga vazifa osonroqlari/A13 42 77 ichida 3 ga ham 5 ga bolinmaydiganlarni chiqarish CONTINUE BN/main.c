#include <stdio.h>
#include <stdlib.h>

int main()
{
    // not found!!!
   for (int son=42;son<=77;son++)
   {
       if (son%3!=0 || son%5!=0)
        continue;

       printf("%d\n",son);
   }
    return 0;
}
