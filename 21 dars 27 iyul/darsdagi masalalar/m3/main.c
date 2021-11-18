#include <stdio.h>
#include <stdlib.h>
int son(int n)
{
    if (n==5)
        return 5;
        return n + son(n-1);
}

int main()
{ 
    printf("%d",son(8) );
    
}





