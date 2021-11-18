#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son;
   printf("son kiriting:");
   scanf("%d",&son);
   //int birlar,onlar,natija;

  /* birlar=son %10; //5
   onlar=son/10; // 2
   natija=birlar+onlar; */

   printf ("natija:%d",son %10+son/10);



    return 0;
}
