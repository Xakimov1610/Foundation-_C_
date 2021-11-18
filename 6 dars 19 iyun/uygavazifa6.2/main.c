#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 ga 5 ga bo'liish jadvali
        int son;
  printf("son kiriting:");
  scanf("%d",&son);



  if ( son % 5==0 && son % 3 == 0 )
  {
      printf("FIZZBUZZ");
  }
  else if ( son % 3==0 )
  {
      printf("FIZZ");
  }
     else if ( son % 5==0 )
  {
      printf("BUZZ");
  }

  else {
    printf("notogri son kiritdiz");
  }
    return 0;
}
