#include <stdio.h>
#include <stdlib.h>

int main()
{
  int son,c;
    printf ("son:");
    scanf("%d",&son);
    c=son-12;
    for( ; son>=c;son--)
    {
        printf("%d\n",son);
    }
    return 0;
}
