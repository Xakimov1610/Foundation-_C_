#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //&&  --> VAA
    // Bu xuddi ko'paytirishga oxshaydi
    // true && true = true      1 * 1 = 1
    // true && false = true      1 * 0 = 0
    // false && true = true      0 * 1 = 0
    // false&& false = true      0 * 0 = 0

    // || -->  YOKI
    // Bu xuddi qo'shish amaliga o'xshaydi
    // true || true = true      1 + 1 = 1
    // true || false = true      1 + 0 = 1
    // false || true = true      0 + 1 = 1
    // false || false = true      0 + 0 = 0

// BIRINCHI && AMALI KO'RIB CHIQILADI KEYIN || AMALI !!
    if (true || false && true) // == <--if (1>2 || 2>1 && 2>0)
    {

        printf("good\n");
    }


    return 0;
}
