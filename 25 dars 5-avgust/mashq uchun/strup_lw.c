#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");

    char nom[20];
    char nom2[20];
    scanf("%s",nom);

   

    printf("%s\n", nom);

    printf("%s\n", strcpy(nom2,strupr(nom)));
   












    // char ism[20]="uzbekiston";

    // printf("%s\n",strupr(ism));

    // printf("%s",strlwr(ism));


    return 0;
}