#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[100]="Har bir ishda hikmat bor";


    for (int i=0; name[i]!='\0'; i++ )
    {

        if (name[i]=='a' || name[i]=='o')
        {
            name[i]=' ';
        }
      
        printf("%c\n",name[i]);
    }





    return 0;
}