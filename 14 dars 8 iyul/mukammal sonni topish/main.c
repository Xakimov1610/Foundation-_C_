#include <stdio.h>
#include <stdlib.h>

int main()
{
    // SOlved
   int son,yigindi=0;
   printf("son:");
   scanf("%d",&son);

   for (int a=1; a<son;a++)
   {
        if (son%a==0)
          yigindi+=a;

   }
        if (yigindi==son)
           printf("mukammal son");

        else {printf("deng!");}







// THIS IS A TRASH. WHILE SOLVING MY TEST
      /* else if(sanoq!=son) {
            printf("deng!");

       break;}*/

        //printf("%d\n",a);
       // printf("%d\n",sanoq);
  // }



    return 0;
}
