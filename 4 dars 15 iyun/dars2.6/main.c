#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son1,son2;

    printf("Birinchi sonni kiriting:");
    scanf("%d", & son1);
    printf("Ikkinchi sonni kiriting:");
    scanf("%d",  &son2);
    printf("sonlarning kvadrati:%f\n",pow(son1,son2));
    printf("kopaytma: %d",son1*son2);
    return 0;
}
