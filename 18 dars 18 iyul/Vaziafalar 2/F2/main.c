#include <stdio.h>
#include <stdlib.h>


int main()
{

   
    char nom[30] = "Chelsea is champion";

   
    for (int i = 30; i>=0; i--)
    {
        printf("%c", nom[i]);
    }

   return 0;
}

// String berilgan "Chelsea is champion".
// Shu string ni teskari tartibda ekranga chiqaring.

//     Output : "noipmahc si aeslehC"