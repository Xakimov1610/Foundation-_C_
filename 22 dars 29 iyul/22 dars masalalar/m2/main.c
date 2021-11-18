#include <stdio.h>
#include <stdlib.h>

int uchga_oshir(int son) 
{
  int *sonA=&son; 
  *sonA+=3;
  return *sonA;
}

int main()
{
    int son = 10;
   
    printf("%d",uchga_oshir(son));

    return 0;
}