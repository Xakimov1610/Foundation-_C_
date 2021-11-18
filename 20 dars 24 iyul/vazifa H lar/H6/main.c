#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char kichikka_almashtir(char a)
{
    return a >= 65 && a <= 90 ? tolower(a) : a;
}
int main()
{
    char harf;
    scanf("%c", &harf);

    printf("%c", kichikka_almashtir(harf));

    return 0;
}