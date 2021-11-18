#include <stdio.h>
#include <stdlib.h>
int main()
{


    // XATO CHIQQAN
    char b[15];
    printf("o'yinni davom ettirasmi[h/y]:");
    scanf("%c",&b);


    for ( ;b=='h' ||b=='y'; )
    {


    if (b=="ha")
    {
        printf("o'yinni davom ettirasmi [h/y]:");
        scanf("%c",&b);
    }



    else if (b=="yoq")
    {
        break;
    }

    }






  //char a='h',b='y';


    return 0;
}
