#include <stdio.h>
#include <stdlib.h>

int main()
{

    // char sozlar[29];

    // int sanoq=0;

    // for (int i = 0; i < 29; i++)
    // {
    //     scanf("%c", &sozlar[i]);
    // }

    char sozlar[25]="kuz haydasang yuz hayda";

     int sanoq=0;

    for (int i = 0; sozlar[i]!='\0'; i++)
    {
        if (sozlar[i]=='a')
        sanoq++;
    }
    printf("%d",sanoq);

    return 0;
}