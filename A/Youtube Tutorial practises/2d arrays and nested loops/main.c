#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nums[4][3]={
       { 1,2,3},
       {4,5,6},
       {7,8,9},
       {10,11,12}

   };
  // printf("%d",nums[1][1]);

    int a,b;
    for (a=0;a<=3;a++)
    {
        for (b=0;b<3;b++)
        {
            printf("%d,",nums[a][b]);
        }
      printf("\n");
    }










    return 0;
}
