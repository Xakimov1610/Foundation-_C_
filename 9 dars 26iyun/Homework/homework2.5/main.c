#include <stdio.h>
#include <stdlib.h>

int main()
{ // uyga vazifa 14-- kiritilgan songacha kvadratini chiqarish
   int son=1,user;
   printf("son kiriting:");
   scanf("%d",&user);



   while(son<user)
   {
       son++;
       printf("%d\n",son*son);
   }
    return 0;
}
