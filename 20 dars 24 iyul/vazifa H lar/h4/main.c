#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_katta(char a)
{
    return a >= 97 && a <= 122 ? true : false;
}
int main()
{
    char harf;
    scanf("%c", &harf);

    printf(is_katta(harf) ? "true" : "false");

    return 0;
}