#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//15 gacha bo'lgan sonlarni kvadrati
int main()
{

  /*float son=1;
  while(son<15)
  {
      printf("natija:%.0f\n",pow(son,2) );
      son++;
  }
  */


    // user 1 dan nechidir songacha bolgan sonni kiritadi
  float son=1,son2;

  printf("sonni kiriting:");
  scanf("%f",&son2);

  while(son<=son2)
  {

      printf("natija:%.0f\n",pow(son,2) );
      son++;
  }
    return 0;
}

