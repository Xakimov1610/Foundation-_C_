#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
  int secret=rand() %20,son;
  printf("1 dan 20 gacha bolgan son kiriting:");
  scanf("%d",&son);
  /*int sanoq;
  int limit=3;
*/
  while( son != secret ){

    if(son<secret)
    {
            printf("kattaroq son kiriting:");
            scanf("%d",&son);
           // sanoq++;
    }
    else {
            printf("kichikroq son kiriting:");
            scanf("%d",&son);
           // sanoq++;
        }
  }
  printf("TOPDINGIZ!!!");
    return 0;
}
