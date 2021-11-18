#include <stdio.h>
#include <stdlib.h>

int main()
{
    int baho;

    printf("bahoni kiriting:");
    scanf("%d",&baho);

    switch (baho)
    {
    case 5:
        printf("a'lo");
        break;
    case 4:
        printf("yaxshi");
        break;
    case 3:
        printf("qoniqarli");
        break;
    case 2:
        printf("qoniqarsiz");
        break;
    default:
       printf("bebaxo!!!");
       break;
    }
   return 0;
}
