#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void katta_harf(char sozlar[20])
{
        if (char[]

  int sana = 0;
    
        if (isupper(sozlar[0]))
        {
            printf("%c", sozlar[0]);
           sana++;
        }
    if (sana == 0)
        printf("a");

        katta_harf(sozlar[20-1]);

    // if (soz[0])
    //     return 'a';
    // if (isupper(soz[20]))
    // {
    //    printf("a");
    // }
    // else {
    //     printf("a");
    // }
    //  katta_harf(soz[20-1]) ;
}


int main()
{
    char sozlar[20]="Hammaga aalom";

    katta_harf(sozlar);

    return 0;
}

// O'ziga string qabul qiluvchi va shu stringdagi
//  birinchi katta harfni qaytaruvchi function tuzing.
//  Agar string da katta harf yo'q bo'lsa, kichik a harfi qaytarilsin.
//   (Recursion bilan ishlansin)

// Input:      "hammaga Salom"
// Output:  'S'

// Input:      "hammaga salom"
// Output:  'a