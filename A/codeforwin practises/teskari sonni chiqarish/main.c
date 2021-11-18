#include <stdio.h>
#include <stdlib.h>

int main_123()
{
    long long  a,b=0,c;
   scanf("%lld",&a);

   while (a)
   {
    b=a%10;

   printf("%lld",b);
   a/=10;

   }






    return 0;
}

/*int main12 () {

int a,b=1;

scanf("%d",&a);


while( b<=a)
{

    printf("%d\n",b*b);
    b++;
}



}*/

int main_12()
{
    int a,b=0;

    scanf("%d",&a);
    while (a)
    {
        b=a%10;
        printf("%d",b);
        a/=10;
    }
    return 0;
}



