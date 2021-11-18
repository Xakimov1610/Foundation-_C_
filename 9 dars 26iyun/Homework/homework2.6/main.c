#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
   int son=1,user;
   printf("son  kiriting:");
   scanf("%d",&user);

   while (son<sqrt(user))
   {

       printf("%d\n",son*son);
       son++;
   }
*/
    /*
    int user=90,nat;
   nat=sqrt(90);
   printf("%d",nat); */

// 2-usuli
   int son=1,user;
   printf("son kiriting: ");
   scanf("%d",&user);

   while (son*son <user)
   {
       printf("%d\n",son*son);
       son++;
   }
    return 0;
}
