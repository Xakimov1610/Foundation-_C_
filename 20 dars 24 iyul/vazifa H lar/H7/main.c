#include <stdio.h>
#include <stdlib.h>


int kattasi(int a[10])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[0]<a[i])
         a[0]=a[i];
    }
    return a[0];
}
int main()
{
    int array[10];
   
   printf("%d",kattasi(array));
    

    return 0;
}