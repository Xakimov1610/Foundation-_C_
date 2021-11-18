#include <stdlib.h>
#include <stdio.h>
// J6 masala pow singari masala 
int pow_(int n,int m)
{
    if(m==0)
        return 1;


        return n * pow_(n,m-1);
}

int main()
{ 

      printf("%d",pow_(5,3) );

    return 0;
}
