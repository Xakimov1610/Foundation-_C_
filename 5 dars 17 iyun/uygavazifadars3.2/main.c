#include <stdio.h>
#include <stdlib.h>

int main()
{ // slindrning hajmini toping

    float r,h,volume;
    float pi=3.14;

    printf("slindirning radiusini kiriting:");
    scanf("%f",&r);
    printf("slindirning balandligini kiriting:");
    scanf("%f",&h);

    volume= pi*r*r*h;

    printf("Slindirning hajmi:%f",volume);

    // bajarildi
    return 0;


}
