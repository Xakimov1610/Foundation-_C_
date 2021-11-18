#include <stdio.h>
#include <stdlib.h>

int modul(int a)
{
    if (a<0)
    {
    a*=-1;
    return a;}
    else {
        return a;}
    }

int main()
{

    int a;
    scanf("%d",&a);
    printf("%d",modul(a) );

    return 0;
}
// moduldan chiqarish