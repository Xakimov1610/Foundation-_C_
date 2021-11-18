#include <stdio.h>
#include <stdlib.h>

int xona_yig(int son)
{

if (son==0)
{
   return son;
}

    return son%10+xona_yig(son/10);

}
int main ()
{
    int son=123;
   
    
    printf("%d",xona_yig(son));
}
