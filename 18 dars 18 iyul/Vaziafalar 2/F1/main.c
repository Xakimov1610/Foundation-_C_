#include <stdio.h>
#include <stdlib.h>
int main()
{

    char tabrik[20];

    printf("kiriting:");
    gets(tabrik);
   

    for (int i = 0; tabrik[i]!='\0'; i++)
    {
        printf("%c\n", tabrik[i]);
    }



   

   

    // Foydalanuvchi string array kiritsin,
    //  shu arraydagi barcha belgilarni ekranga chiqaring :



        return 0;
}