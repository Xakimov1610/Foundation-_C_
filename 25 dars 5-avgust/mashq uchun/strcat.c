#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    system("cls");

    char ism[20]="ismingiz: ";
    char ism2[20];
    char ism3[20]="familyangiz: ";
    char ism4[20];
    scanf("%s %s",ism2,ism4);

    printf("%s \n%s",strcat(ism,strupr(ism2)),strcat(ism3,strupr(ism4)));

    // char nom[60]="uzbekiston";
    // char name[25]="rostan";
 

    return 0;
}

for (int i = 1;; i++)
{

    if (i % 1 == 0 && i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 6 == 0 && i % 7 == 0 && i % 8 == 0 && i % 9 == 0 && i % 10 == 0 && i % 11 == 0 && i % 12 == 0 && i % 13 == 0 && i % 14 == 0 && i % 15 == 0 && i % 16 == 0 && i % 17 == 0 && i % 18 == 0 && i % 19 == 0 && i % 20 == 0)
    {
        printf("%d", i);
        break;
    }
}
232792560