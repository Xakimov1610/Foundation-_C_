#include <stdlib.h>
int main()
{

    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
    int array2[10]={};


    for (int i=9,j=0; i>=0,j<10;i--,j++)
    {

        array2[j]=my_array[i];

    }
    for (int i=0; i<10; i++)
    {printf("%d\n",array2[i]);
        }

    return 0;
}   