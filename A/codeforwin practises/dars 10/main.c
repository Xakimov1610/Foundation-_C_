#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sonlarning yig'indisini topish
    int a=1,b,c=0;
    printf("sonni kiriting: ");
    scanf("%d",&b);

    while(a <= b) //
    {
        c=c+a;
        a++;

    }
    printf("%d\n",c);

    return 0;
}




int main12()
{

    // factorial masalasi
        int a=1,b,c=1;
    printf("sonni kiriting: ");
    scanf("%d",&b);

    while(a <= b) //
    {


        c=c*a;
        a++;

    }
    printf("%d\n",c);

    return 0;
}
