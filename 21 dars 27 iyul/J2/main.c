// recursiyabn Fibanacci
/*
#include <stdio.h>

int fibonacci(int i)
{

    if (i == 0)
    {
        return 0;
    }

    if (i == 1)
    {
        return 1;
    }
    
    return fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{

    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%d\t\n", fibonacci(i));
    }

    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 1, c;
    int n = 6;
    for (int i = 1; i < n; i++)
    {
        printf("%d\n", a);
        c = a + b; // 0+1
        a = b;     // 0+1
        b = c;     // 1=1
    }

    return 0;
}