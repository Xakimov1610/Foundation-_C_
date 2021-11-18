#include <stdio.h>
#include <stdlib.h>

int main()
{
    //trapetsiyani yuzini topish
   int a,b,h,s;

   printf("trapetsiyani a tomonini kiriting:");
   scanf("%d",&a);
    printf("trapetsiyani b tomonini kiriting:");
   scanf("%d",&b);

    printf("trapetsiyani balandligini kiriting:");
   scanf("%d",&h);

   s=0.5*h*(a+b);
   // s=1.0 / 2.0*h*(a+b);  BU YERGA HAQIQIY,KASR SON KIRITISH SHART ,JAVOB SHUNDA TO'GRI CHIQADI.
   printf("javob:%d",s);
// bajarildi
    return 0;
}
