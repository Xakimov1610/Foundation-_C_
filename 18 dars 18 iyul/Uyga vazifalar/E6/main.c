#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[2][4] = {};
    int array2[2][4] = {};
    int sanoq = 0;
    printf("array 1 ga son kiriting:");
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            scanf("%d", &array[i][k]);
        }
    }

    printf("array 2 ga son kiriting:");
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            scanf("%d", &array2[i][k]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 4; k++)
        {
            if (array2[i][k] != array[i][k])
                sanoq++;
        }
    }
    if (sanoq == 0)
        printf("teng");
    else
    {
        printf("teng emas");
    }

    // 2 ta array berilgan, a[2][4] va b[2][4].
    // Shu arrayga foydalanuvchidan qiymatlar qabul qiling.
    // Agar bu arraylar(ning elementlari qiymatlari) aynan teng
    // bo'lsa "teng" degan yozuv chiqsin, aks holda "teng emas" degan yozuv chiqsin

    return 0;
}
