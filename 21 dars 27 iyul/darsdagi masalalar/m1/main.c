#include <stdio.h>
#include <stdlib.h>
int kopaytma(int n)
{
    if (n == 1)
        return (1);
    return n * kopaytma(n - 1);
}
int main()
{
    printf("%d", kopaytma(4));

    return 0;
}
// n gcha sonlarni kopyatmasini topish