#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a,b,c;

 printf("PARALLIPIPEDNI 3 TOMONINI KIRITING:");
 scanf("%f %f %f", &a,&b,&c);


 printf("volume:%f\n",a*b*c);
 printf("surface area: %f",2*(a*b+a*c+b*c) );
    return 0;
}
