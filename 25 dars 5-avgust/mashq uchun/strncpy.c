#include <stdio.h>
#include <string.h>

int main()
{

    char nom[30]="countryside";
    char nom2[20];

    strncpy(nom2,nom,5);
    printf("%s\n",nom);
    printf("%s",nom2);

    // strncpy(nom2,nom,5);
    // strncpy(nom2,nom,8);





    return 0;
}