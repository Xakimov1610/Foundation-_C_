#include <stdio.h>
#include <stdlib.h>
int main()
{

    char full_name[50]="Javlonbek Sobirov yaxshi bola";

    for (int i=0; full_name!='\0';i++)
    {
        if (full_name[i]==' ')
        {
            printf("\n");
            continue;
        }
       
        printf("%c",full_name[i]);
    }





    return 0;
}