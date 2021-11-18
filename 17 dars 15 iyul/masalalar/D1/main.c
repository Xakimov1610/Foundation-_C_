#include<stdlib.h>
#include <stdio.h>
int main ()
{

    int user;
    scanf ("%d",&user);
    int my_array[10]={3,5,-4,0,15,88,-2,9,7,1};

    int son[9]={};

    for (int i = 0,j=0; i < 10; i++,j++)
    {
        if (i==user)
        {
            j--;
            //continue;
        }
      
        son [j]=my_array[i];
    }

    for (int i=0; i < 9;i++)
    {
        printf("%d\n",son[i]);
    }





    return 0;
}

// #include <stdlib.h>
// int main()
// {

//     int user;
//     scanf("%d", &user);
//     int my_array[10] = {3, 5, -4, 0, 15, 88, -2, 9, 7, 1};

//     int son[9] = {};

//     for (int i = 0; i < 10; i++)
//     {
//         if (i == user)
//             continue;

//         son[i] = my_array[i];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", son[i]);
//     }

//     return 0;
// }

