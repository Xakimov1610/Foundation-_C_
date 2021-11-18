#include <stdio.h>
#include <stdlib.h>


int main()
{

     int a;
    printf("son:");
    scanf("%d",&a);
    for ( ;a!=0;a/=10 )
    {
        printf("%d",a%10);

    }


return 0;
}












int main_1()
{

     int a;
    printf("son:");
    scanf("%d",&a);

    for (int b=0;a!=0;a/=10)
    {
        b=a%10;
        printf("%d",b);

    }


return 0;
}


int main_2()
{

     int a;
    printf("son:");
    scanf("%d",&a);
    for ( ;a!=0; )
    {
        printf("%d",a%10);
        a/=10;
    }


return 0;
}




