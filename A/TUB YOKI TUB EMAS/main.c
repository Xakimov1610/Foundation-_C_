#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2, n, c=0;

    printf("Biror son kiriting: ");
    scanf("%d", &n);

    while(a<n)
    {
        if (n%a==0)
        {
            printf("Tub emas, bu son %d ga bo'linadi", a);
            break;
        }
        else if (n%a!=0)
            c++;
        else
            printf(",");
        a++;
    }

    if (n-2==c)
        printf("Tub");
    else
        printf(".");

    return 0;
}
