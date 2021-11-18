#include <stdio.h>
#include <stdlib.h>

void xotira(int *sonA)
{
    
   printf("%x",sonA);
}

int main()
{
    int son = 10;

    xotira(&son);

    return 0;
}
// 2- KORINISH
// void xotira(int son)
// {
//     int *sonA = &son;
//     printf("%x", sonA);
// }

// int main()
// {
//     int son = 10;

//     xotira(son);

//     return 0;
// }

// UZIM XATO ISHLAGANIM BIRINCHI MARTA
// int xotira(int son)
// {
//    int *sonP = &son;
//    return  sonP;
// }


// int main ()
// {
//     int son=10;
   
//     printf("%x", xotira(son));

//     return 0;
// }