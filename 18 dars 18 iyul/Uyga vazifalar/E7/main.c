#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sanoq=0;
    int array[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < 3; i++)
    {

        for (int k = 0; k < 3; k++)
        {
            if ( i==0 && k==0 || i==0 &&k==2 || i==1&&k==1 || i==2&&k==0 || i==2&&k==2)   
            sanoq+=array[i][k];
        }
    }
    
    printf("%d",sanoq);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//     2 o'lchamli array elon qiling(kvadrat shaklida bo'lsin) va shu arrayga
//      foydalanuvchidan qiymatlar qabul qiling. Shu arrayning diogonalida 
//      joylashgan qiymatlari yig'indisini toping.

// 1, 2, 3
// 4, 5, 6
// 7, 8, 9

// Output: 25 (chunki 1+3+5+7+9=25)
    
    
    return 0;
}