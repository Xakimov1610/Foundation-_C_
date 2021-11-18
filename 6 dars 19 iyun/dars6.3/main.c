#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("bir son kiritng:");
    scanf("%d",&a);
    if (  a= 0) //KODNI BIR BOSHQA YOZISH KERE CHUNKI KODNI TARTIB BOYICHA OQIYDI COMPILER!!! AGAR a=0 NI KEYIN BERSAK BU KOD ISHLAMAYDI ETIBIR BERING...

    {
        printf("bu son 7 ga bolinadi");

    }
    else if (a%7==0)
    {
        printf("bu son 0 ga teng");
    }
    else {
        printf("bu son 7 ga bo'linmaydi..");
    }
    return 0;
}
