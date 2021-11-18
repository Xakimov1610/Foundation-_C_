#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b;
   const float pi=3.14;
   printf("radiusni kiriting:");
   scanf("%f",&a);
   b=4.0/3*pi*a*a*a; // shu yerda 4/3 da ikkisidan onli kasr bolish kere!!!
   printf("javob:%f",b);

    return 0;
}
