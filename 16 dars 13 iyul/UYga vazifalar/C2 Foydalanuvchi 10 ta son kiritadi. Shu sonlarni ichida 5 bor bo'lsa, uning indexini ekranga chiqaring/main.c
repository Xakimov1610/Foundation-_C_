#include <stdio.h>
#include <stdlib.h>

int main()
{
    // faqat bir xonalik sonlarda ishlaydi

   int son[10]={},sanoq=0;

   for (int i=0; i<10; i++)
   {
       scanf("%d",&son[i]);
    
   }
   for (int i = 0; i < 10; i++)
   {
      if (son[i]==5)
      {sanoq++;
      printf("%dinchi indexda 5 bor\n",i);
      }
   }
   if (sanoq==0)
   {printf("5 soni yoq");}

    return 0;
}
