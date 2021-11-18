#include <stdio.h>
#include <stdlib.h>
int main()
{

int array[3][3]={
   {1,2,3},
   {4,5,6},
   {7,8,9}
   
};



for (int i = 0; i < 3; i++)
{
   for (int k = 0; k < 3; k++)
   {

      printf("%d ",array[k][i]);
   }

   printf("\n");
}


return 0 ;
}

// Ikki o'lchamli, ichma ich array berilgan. Shu arrayning qatorlari va
//  ustunlari qiymatlarini almashtirib qo'ying. (Tuzgan dasturingiz har qanday 2 
//  o'lchamli array uchun ishlasin)