//Kiritilgan son necha xonali ekanligini aniqlovchi function tuzing. (Recursion bilan ishlansin)
#include<stdio.h>
#include <stdlib.h>

int nech_xona(int son)
{
   
    if (son/10==0)
        return 1;


    return 1 + nech_xona(son/10);
}
int main()
{

    
    int son;
    scanf("%d", &son);

    printf("%d",nech_xona(son));





    return 0;
}
