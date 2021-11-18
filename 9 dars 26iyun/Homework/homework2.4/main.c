#include <stdio.h>
#include <stdlib.h>

int main()
{

    //  FOUND finally !!!
    // vazifa 13
   int son=1,gacha=100,sanoq=0;


   while (son<gacha)
   {
       son++;
       if (son %5==0 &&son%10!=0) {
      printf("%d\n",son);
      //sanoq++'
       }

   }
  //printf("%d ta --- son 5 ga bolinadi lekin 10 ga emas",sanoq/2);
    return 0;
}
