#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf ("2 ta son kiriting:");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        for ( ;a>=b;a--)
            printf("%d\n",a);

    }

     else if (a<b)
    {
        for ( ;b>=a;b--)
            printf("%d\n",b);
    }
    return 0;
}
