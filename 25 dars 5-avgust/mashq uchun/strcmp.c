#include <stdio.h>
#include <string.h>

int main()
{
    // strcmp -  ikki narsani bir xilligini tekshiradi
    // agar 0 qaytsa ,ikki narsa teng
    // agar 1 qaytsa teng emas
    system("cls");
    char ism[20]="bobur";

    printf("%s\n",ism);
    if (strcmp(ism,"bobur")==0)
         printf("togri\n");
    else 
        printf("noto'g'ri\n");
    



    return 0;
}