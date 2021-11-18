#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("5 ta son kiriting:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);


    if (a<b)
    {
        a=b;
    }
    if (a<c)
    {
        a=c;
    }
     if (a<d)
    {
        a=d;
    }
    if (a<e)
    {
     a=e;

    }
        printf("%d eng katta son",a);


    return 0;
}
