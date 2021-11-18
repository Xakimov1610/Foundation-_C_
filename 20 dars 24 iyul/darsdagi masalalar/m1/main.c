#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool  raqammi(int a)
{

    if (a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9')
        return true;
    return false;
}

int main()
{
    char belgi;
    scanf("%c", &belgi);

    printf(raqammi(belgi) ? "raqam" : "raqam emas");

    return 0;
}