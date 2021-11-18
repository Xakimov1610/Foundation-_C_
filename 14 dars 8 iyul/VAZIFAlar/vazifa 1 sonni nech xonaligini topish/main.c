#include <stdio.h>
#include <stdlib.h>

int main_1()
{
    int son, xona=1;  //1234 // 2 //0 //-5

    printf("son:");
    scanf("%d",&son);

    son=abs(son); // musbat son qilish

    // for yordamida sonni nech xonaligini bilish
    for ( ; son/10 > 0; son/=10, xona++)
    {

    }
    printf("%d",xona);
    /*
   // while yordamida sonni nech xonaligini bilish
    if (son<0) //manfiyni musbat qilish uchun
        son*= -1;

    while (son/10 > 0 )   // son/10!=0 deyish ham mumkin
    {
        son/=10;
        xona++;
    }
    printf("%d",xona);
*/

    return 0;
}

int main ()
{

}



// XATO VARIANTI
  /*  int son,sanoq=0;
    printf("son:");
    scanf("%d",&son);

    for ( ;son!=0;son/=10,sanoq++)
    {

    }

        printf("%d",sanoq);

    */

