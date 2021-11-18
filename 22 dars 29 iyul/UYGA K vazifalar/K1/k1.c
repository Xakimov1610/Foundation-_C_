#include <stdio.h>
#include <stdlib.h>

void son_manzil(int *Mson)
{
  printf("%x",Mson);
}

int main ()
{
    int son;
    scanf("%d",&son);
   
      son_manzil(&son);
  




    return 0;
}