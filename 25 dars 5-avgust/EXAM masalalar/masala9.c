#include <stdio.h>
#include<string.h>

int main()
{

    // char str[20] = "coffee";

    // printf("String before strrev(): %s\n", str);

    // strrev(str);

    // printf("String after strrev(): %s\n", str);





        char soz[10];
        char soz2[10];
        
        system("cls");
        scanf("%s",soz);

      //  strcpy(soz2, strrev(soz));

         printf("%s\n", soz);
         printf("%s\n", strrev(soz));

         if (strcmp(soz,strrev(soz))==0)
         {
            printf("polindrom");
         }
         else
         {
             printf("deng");
         }

         return 0;
}