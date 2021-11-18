#include <stdlib.h>
#include <stdio.h>

void n_gacha(int n,int m)
{
        if (n<=m)
        {
            printf("%d\n", n);
            n_gacha(n+1,m);
        }
       
}

//            return n + son(n - 1);
int main()
{
     int a;
     scanf("%d",&a);
   
    n_gacha(1,a);
}

