#include <stdio.h>
#include <stdlib.h>

int main()
{

 //uyga vazifani ikkinchi usuli ENG TO'GRI YO'LI

 int a;

 printf("5 xonalik son kiriting:");
 scanf("%d",&a);

 printf("Birlar xonasidagi son: %d\n",a%10);

 printf("O'nlar xonasidagi son: %d\n",a/10 %10);

 printf("Yuzlar xonasidagi son: %d\n",a/ 100 %10);

 printf("Minglar xonasidagi son: %d\n",a/1000%10);

 printf("O'n minglar xonasidagi son:%d\n",a/10000%10);
    return 0;
}
















  // UYGA VAZIFA
  /* int son;

   printf("5 xonali son kiriting:");
   scanf("%d",&son);

   printf("bir xonalik son: %d\n",son % 10 );
   printf("10 xonalik son: %d\n",son % 100 /10);
   printf("100 xonalik son: %d\n",son / 100 %10);
   printf("1000 xonalik son: %d\n",son/ 1000 %10 );
   printf("10 ming xonalik son: %d\n",son / 10000 %1000 );
    return 0;


}
*/

/*
  // UYGA VAZIFA 3 usuli
   int son;

   printf("5 xonali son kiriting:");
   scanf("%d",&son);

   printf("bir xonalik son: %d\n",son % 10 );
   printf("10 xonalik son: %d\n",son % 100 /10);
   printf("100 xonalik son: %d\n",son %1000 /100);
   printf("1000 xonalik son: %d\n",son % 10000 /1000 );
   printf("10 ming xonalik son: %d\n",son %100000 /10000 );
    return 0;
}
*/
