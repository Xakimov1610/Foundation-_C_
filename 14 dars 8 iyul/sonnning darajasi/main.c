#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int a,b,c=1;
    printf("ikki son kiriting:");
    scanf("%d %d",&a,&b);

    for (int i=1;i<=b;i++)
    {
        c=c*a;
    }
     printf("%d",c);
    return 0;
}

/*

birinchi ishlaganim xato

int main_1()
{
    int a,b,c,d;
    printf("ikki son kiriting:");
    scanf("%d%d",&a,&b);

    for (c=1;c<b;c++)
    {
        c*a;
        d=c;


    }
     printf("%d",c);
    return 0;
}

*/


