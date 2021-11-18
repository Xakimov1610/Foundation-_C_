#include <stdio.h>
#include <stdlib.h>

int main()
{
    // uchburchakning gipatenuzasini topish
    int a,b,c;

    printf("Uchburchakning 2 ta katetlarini kiriting:");
    scanf("%d %d",&a,&b);
    c=sqrt((a*a)+(b*b));
    //c=sqrt(pow(a,2)+pow(b,2));
    printf("Uchburchakning gipatinuzasi:%d",c);
// BAJARILDI
    return 0;
}
