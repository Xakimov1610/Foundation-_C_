#include <stdio.h>
#include <stdlib.h>

int main()
{
   int son;

    printf("3 xonalik son kiriting:");
   scanf("%d",&son);

   if (son%10==son/100)
       printf("POLINDROM\n",son);

  else {printf("polindrom emas\n"); }

  return 0;
}
int main_2() {

int son;
printf("4 xonalik son kiriting:");
scanf("%d",&son);

if ( son%10==son/1000 && son%100/10==son/100%10)
{
    printf("POLINDROM\n");
}
else {printf("polindrom emas\n");}

}

int main_15() {

int son;
printf("5 xonalik son kiriting:");
scanf("%d",&son);

if ( son%10==son/10000 && son%100/10==son/1000%10)
{
    printf("POLINDROM\n");
}
else {printf("polindrom emas\n");}

}
