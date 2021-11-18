#include <stdio.h>
#include <stdlib.h>
int toq(int n)
{
    if (n == 1 )
        return (1);

    if ( n % 2==1 )
      return  n+toq(n-2);

    else
        return toq(n - 1);
}
int main()
{
    printf("%d", toq(5));

    return 0;
}