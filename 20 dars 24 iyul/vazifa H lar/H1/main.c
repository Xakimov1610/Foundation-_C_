#include<stdio.h>
#include<stdlib.h>

void tub(int a)
{
    int sanoq=0;
    int son=a+1;

    for (int i = 1; i <= son; i++)
    {
        if (son % i == 0)
            sanoq++;
    }

    if (sanoq == 2)
      

    for (int i = son; i<100; i++)
    {
        for (int i = 1; i <= b; i++)
        {

            if (b % i==0)
                sanoq++;
            
        }
        if (sanoq<3)
        {
           return b;
            break;
        }
          
    }
    
}
int main()
{
    int son;
    scanf("%d",&son);

    printf("%d",tub(son) );






    return 0;
}