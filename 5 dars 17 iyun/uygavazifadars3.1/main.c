#include <stdio.h>
#include <stdlib.h>

int main()
{ //uygavazifadars3.1
// slindirning yuzini topish
    float r,h,s;
    float pi=3.14;
    printf("slindirni radiusini kiriting:");
    scanf("%f",&r);
     printf("slindirni balandligini kiriting:");
    scanf("%f",&h);

    //s=2*pi*r*h+2*pi*pow(r,2);
     s=2*pi*r*h+2*pi*r*r;
    printf("slindrning yuzi:%.2f",s);

    //bajarildi







    return 0;
}
