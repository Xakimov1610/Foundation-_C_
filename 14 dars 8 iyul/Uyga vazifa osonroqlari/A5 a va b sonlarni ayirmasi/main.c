#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("2 ta son kiriting:");
   scanf("%d %d",&a,&b);

   if (a>b)
    printf("natija: %d",a-b);
    else if (a<b)
    printf("natija: %d",b-a);
   else{printf("sonlar teng");}
    return 0;
}
