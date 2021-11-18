#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yosh=12;
    int * pYosh = &yosh;
    float baho=4.5;
    float * pBaho = &baho;
    char harf='A';
    char * pHarf = &harf;

    printf("yoshning memory adresi: %p",yosh);
    return 0;
}
