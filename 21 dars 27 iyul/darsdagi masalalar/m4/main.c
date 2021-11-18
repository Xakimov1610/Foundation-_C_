#include<stdlib.h>
#include<stdio.h>

int on(int n)
{
    if (n==50)
        return 50;
        //if (n%10==0)
        return on(n+10);
       
}


int main()
{
    printf("%d",on(20));
}
