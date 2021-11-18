#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son;
   printf("son kiriting:");
   scanf("%d",&son);

   for (int a=1;a<=son; a++)
   {
       if (son%a==0)
        printf("%d\nd",a);
   }
    return 0;
}
