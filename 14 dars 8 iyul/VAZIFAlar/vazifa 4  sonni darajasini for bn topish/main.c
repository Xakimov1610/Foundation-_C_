#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c=1;
   printf("son:");
   scanf("%d %d",&a,&b);

   for (int i=1;i<=b;i++)
   {
       c*=a;
   }
   printf("%d",c);
    return 0;
}
