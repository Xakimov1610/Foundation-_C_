#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret_son=15,son;

    do {
    printf("sonni kiriting:");
    scanf("%d",&son);

           if ( son<secret_son)
        {
            printf("kichikroq son kiriting:");
            scanf("%d",&son);

        }
        else {printf("kattaroq son kiriting:");
        scanf("%d",&son);
}

    }
     while(son!=secret_son);
     {

     }
    printf("topdingiz!!!");



    return 0;
}
