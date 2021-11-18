#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b,c=1;
    printf("son kiriting:");
    scanf("%d",&b);

    while (a<=b)
    {
        c*=a;
        a++;
    }
    printf("%d\n",c);


    return 0;
}
