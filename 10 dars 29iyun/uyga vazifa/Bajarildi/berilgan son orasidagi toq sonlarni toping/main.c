#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0;
    printf("birinchi son:");
    scanf("%d",&a);
    printf("ikkinchi son:");
    scanf("%d",&b);

    while (a<=b)
    {
        if (a %2==1)
        {
            c+=a;
        }
        a++;
    }
    printf("%d",c);
    return 0;
}
