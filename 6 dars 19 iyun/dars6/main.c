#include <stdio.h>
#include <stdlib.h>

int main()
{
   // DARS 5 DAGI UYGA VAZIFA

   //int son=95847;
    int son;
   printf("5 xonali son kiriting:");
   scanf("%d",&son);*/

    printf("birlar xonasidagi son:%d\n",son %10);
    son=son /10; // 9584 - qoldi shunda butun son bo'lib
    printf("o'nlar xonasidagi son:%d\n", son %  10);
    son=son/10; // 958 - qoldi shunda butun son bo'lib
    printf("yuzlar xonasidagi son:%d\n",son %10);
    son =son/10; // 95 -qoldi shunda butun son bo'lib
    printf("minglar xonasidagi son:%d\n",son %10);
    printf("o'n minglar xonasidagi son:%d\n",son /10);
    return 0;
}
