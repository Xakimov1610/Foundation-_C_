#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a;
   float b;
   float c;
   float per;
   float area1;

   printf("Uchburchakning birinchi tomonini kiriting:");
   scanf("%f",&a);
    printf("Uchburchakning ikkinchi tomonini kiriting:");
   scanf("%f",&b);

    printf("Uchburchakning uchinchi tomonini kiriting:");
   scanf("%f",&c);

   per=(a+b+c)/2;
   printf("uchburchakning perimetri:%f\n",per);
   area1=per*(per-a)*(per-b)*(per-c);
   printf("Uchburchakning yuzi: %.1f",sqrt(area1));


    return 0;
}




















