/*#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c,p,s;
   printf("Uchburchakning 3 tomonini kiriting:");
   scanf("%f %f %f",&a ,&b ,&c);
   p=(a+b+c)/2;
   s=p*(p-a)*(p-b)*(p-c);
   printf("UCHBURCHANING PERIMETRI:%f\n",p);
    printf("UCHBURCHANING YUZI:%f\n",sqrt(s));
    return 0;
}*/



#include <stdio.h>
#include <stdlib.h>
int main () {
 float a,b,c,p,area;
 printf("uchburchakni tomonlarini kiriting:");
 scanf("%f %f %f",&a,&b,&c);

 p=(a+b+c)/2;
 area=sqrt (p*(p-a)*(p-b)*(p-c));

 printf("uchburchakning yuzi:%f",area);



return 0;
}
