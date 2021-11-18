#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area(int a,int b,int c)
{
    float s = (a + b + c) / 2;
 
    return sqrt ( s*(s-a)*(s-b)*(s-c) );
}
int main()
{

int a,b,c;
scanf("%d %d %d",&a,&b,&c);

printf("%f",area(a,b,c));

    return 0;
}
