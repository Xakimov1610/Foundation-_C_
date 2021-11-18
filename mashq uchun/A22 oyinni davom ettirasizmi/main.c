#include <stdio.h>
#include <stdlib.h>
int main()
{
    char b;

    do
    {

        printf("O'yinni davom ettirasmi [h/y]:");
        scanf("%c",&b);
    if (b=='h' ||  b=='H')
    {

        scanf("%c",&b);
    }
    else if (b=='y' || b=='Y')
    {
        printf("O'yin tugadi\nDeng!");
        break;
    }
    else {  break;  }

    }
        while(1);

    return 0;
}















/*
    // XATO CHIQQAN
    char b,c;
    printf("o'yinni davom ettirasmi[h/y]:");
    scanf("%c",&b);


    for ( ;  ; )
    {


    if (b=='h')
    {

        printf("o'yinni davom ettirasmi [h/y]:");
        scanf("%c",&c);

    }

    else if (b=='y')
    {
        printf("deng!");
        break;
    }

    }

*/
