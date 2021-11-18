#include <stdio.h>
#include <stdlib.h>

int kvadrat(int son,int son2)
{
    int bir=1;
    for (int i = 0; i < son2; i++)
    {
       bir*=son;
    }
    return bir;
    
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",kvadrat(a,b) );

    //pow() funksiyasiga aynan o'xshash funksiya yozing
    return 0;
}