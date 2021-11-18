#include <stdlib.h>
#include <stdio.h>
int main ()
{

    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
   // int kichik=0;
    for (int i=0; i<10;i++)
    {

        if (my_array[0]<my_array[i])
            my_array[0]=my_array[i];

        if (my_array[1] > my_array[i])
            my_array[1]=my_array[i];
    }
    printf("%d",my_array[0]-my_array[1]);

    return 0;
}