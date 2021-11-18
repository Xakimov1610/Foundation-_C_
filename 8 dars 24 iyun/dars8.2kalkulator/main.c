#include <stdio.h>
#include <stdlib.h>

int main()
{

        float a,b;
        char c;
   while(1) {
        printf("ikki matematik amalni kiriting:");
        scanf("%f %c %f",&a,&c,&b);



    if (c=='+')
    {
        printf("natija:%.0f\n",a+b);
    }
    else if (c=='-')
    {
        printf("ayirma:%.0f\n",a-b);
    }

    else if (c=='*')
    {
        printf("kopaytma:%.0f\n",a*b);
    }
     else if (c=='/')
     {
         printf("bo'linma:%f\n",a/b);
     }

      else if (c=='%')
     {
         printf("qoldiq:%d\n",(int)a%(int)b ); // QOLDIG'INI TOPISH .TIPDAN TIPGA OTISH
     }
    else {
        printf("Noto'g'ri amal kiritdingiz");
    }
   }













/*


    char c;
    float a,b;


    printf("birinchi sonni kiriting:");
    scanf("%f",&a);
    printf("matematik amalni kiriting:");
    scanf(" %c",&c);  // BU YERDA %c dan oldin bita bosh joy bolishi shart unda DASTUR ISHLAMAY QOLADI scanf("BU YERDA JOY BOLSIN_%c",&c);
    printf("ikkinchi sonni kiriting:");
    scanf("%f",&b);

    if (c=='+')
    {
        printf("natija:%.0f",a+b);
    }
    else if (c=='-')
    {
        printf("ayirma:%.0f",a-b);
    }

    else if (c=='*')
    {
        printf("kopaytma:%.0f",a*b);
    }
     else if (c=='/')
     {
         printf("bo'linma:%f",a/b);
     }

    else {
        printf("Noto'g'ri amal kiritdingiz");
    }



*/


    return 0;
}
