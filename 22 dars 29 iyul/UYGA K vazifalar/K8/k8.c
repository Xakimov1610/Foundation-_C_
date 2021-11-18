#include<stdio.h>
#include <stdlib.h>

int kattasi(int *son)
{
    
    for (int i = 1; i < 9; i++)
    {
       if (son[0]<son[i])
            son[0]=son[i];
    }

    return son[0];
    
}

int main() 
{
   
   system("cls");
    int son[]={1,6,9,4,99,49,31,3,11};
    //int *son=&son;
    printf("%d",kattasi(son));

    
    return 0;
}