#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;

    printf("UCHTA SON KIRITING:");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d ENG KATTA SON",a);
    }
    else if (b>a && b>c)
    {
        printf("%d SON ENG KATTA SON",b);
    }
   /*  else if (c>a && c>b) {
            printf("%d eng katta son",c);
     }*/
        else {
           printf("%d eng katta son",c);
        }





    return 0;
}
