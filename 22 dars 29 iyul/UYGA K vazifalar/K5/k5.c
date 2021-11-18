#include <stdlib.h>
#include <stdio.h>
#include<math.h>

float ildiz( float *sonP)
{

    return *sonP=sqrt(*sonP);
}

int main()
{

    float son;
    scanf("%f",&son);
    printf("%f\n",ildiz(&son) );

    return 0;
}