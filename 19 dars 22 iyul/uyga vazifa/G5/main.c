#include <stdio.h>
#include <stdlib.h>


float kattasi(float a,float b,float c,float d,float e)
{
 if (a<b)
 a=b;
 if (a<c)
 a=c;
 if (a<d)
 a=d;
 if (a<e)
 a=e;
 return a;
}

int main()
{

    float a,b,c,d,e;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    
   
    printf("%f", kattasi(a,b,c,d,e));

    return 0;
}