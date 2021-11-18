#include <stdio.h>
#include <stdlib.h>

int main()
{
   // INTEGER 23 masala --> sekundlarni soat minut va qolgani sekundlarni yozish
/*
   int soat,minut,sekund=7270;

   soat=sekund/3600; // 3600=1 soat
   minut = sekund%3600/60; // 3600 bolingandagi qoldig'ini 60 ga bo'lsa minut chiqadi
   sekund=sekund%3600%60%60;

   printf("%d soat %d minut %d sekund",soat,minut,sekund);
   */

   int sekund;
   printf("sekundni kiriting:");
   scanf("%d",&sekund);


   printf("%d soat %d minut %d sekund",sekund/3600,sekund%3600/60,sekund%3600%60%60);
    return 0;
}



