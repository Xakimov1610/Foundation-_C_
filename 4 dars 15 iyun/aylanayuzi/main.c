#include <stdio.h>
#include <stdlib.h>

int main()
{

    // aylanani yuzini topish fortmulasi A=PISON*RADIS KVADRATI!!!
    float r;
    float yuzi;
    printf("Aylanani radiusini kiriting:");
    scanf("%f",&r);
    yuzi=(3.14)* pow (r,2);
    printf("aylanani yuzi:%f",yuzi);

    return 0;
}
