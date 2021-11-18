#include <stdio.h>
#include <stdlib.h>

int main()
{
    //To'g'ri ishlangan
    // int a=10,b=11,c;
    int a,b,c;
    printf("Birinchi son kiriting:");
    scanf("%d",&a);

    printf("Ikkinchi sonni kiriting:");
    scanf("%d",&b);

     c=a; //c=10
    a=b;//a=11
    b=c; //11=10

    printf("birinchi son:%d \n ikkinchi son:%d\n",a,b);
    //printf("son2:%d\n",son1);
    return 0;
}
