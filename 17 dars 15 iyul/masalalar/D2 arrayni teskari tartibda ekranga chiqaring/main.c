#include<stdlib.h>

int main( )
{

    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};

    for (int i=9; i>=0;i--)
    {
        printf("%d\n",my_array[i]);
    }

    return 0;
}