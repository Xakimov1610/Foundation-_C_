#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("son kiriting: ");
    scanf("%d",&num);

    while (num !=0)
    {
        printf("%d\n",num);
        num=num/10;
    }
    return 0;
}

