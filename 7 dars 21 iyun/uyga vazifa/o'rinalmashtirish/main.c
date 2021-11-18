#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("2 ta son kiriting:");
    scanf("%d %d",&a,&b);
    a=b;
    c=a;
    a=b;
    printf("natija:%d %d",a,b);
    return 0;
}
