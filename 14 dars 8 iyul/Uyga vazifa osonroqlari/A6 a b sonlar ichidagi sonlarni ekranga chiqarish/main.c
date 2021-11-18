#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b;
   printf("2 ta son kiriting:");
   scanf("%d %d",&a,&b);

   for ( ; a<=b;a++){
    if (a<=b)
        printf("%d\n",a);
    else if (a==b)
        printf("sonlar teng");

   }

    return 0;
}
