#include <stdio.h>
#include <stdlib.h>

int main()
{

    char login[]="ahmadjon";
    char parol="123456";
    int sanoq=3;
    char login2[10];
    char parol2[10];

    printf("login kiriting:");
    scanf("%s",&login2);
    printf("parolni kiriting: ");
    scanf("%s",&parol2);

    if (strcmp("ahmadjon",login2)==0 && strcmp("123456",parol2)==0)
    {
        printf("correct");
    }
    else if (strcmp("ahmadjon",login2)==0 && strcmp("123456",parol2)!=0)
    {
        printf("parolni qaytadan kiriting: ");
        scanf("%s",&parol2);
    }







    return 0;
}
