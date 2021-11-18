#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool raqammi(int a)
{

    for (int i = 0; i < 10; i++)
    {
        if (a == i)
            return false;
        break;
    }
    return true;
}
int main()
{
    int belgi;
    scanf("%d", &belgi);

    printf(raqammi(belgi) ? "raqam" : "raqam emas");

    return 0;
}