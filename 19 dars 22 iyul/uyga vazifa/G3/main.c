#include <stdio.h>
#include <stdlib.h>

int katta(int a, int b)
{
    if (a>b)
    return a;
    else {
        return b;
    }
}

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d",katta(a,b) );


// 2 sonni kattasini topish

    return 0;
}