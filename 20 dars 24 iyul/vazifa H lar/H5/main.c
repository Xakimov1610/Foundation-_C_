#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char kattaga_almashtir(char a)
{
  return a >= 97 && a <= 122 ? toupper(a) : a;
}
int main()
{
    char harf;
    scanf("%c", &harf);

    printf( "%c",kattaga_almashtir(harf));

    return 0;
}