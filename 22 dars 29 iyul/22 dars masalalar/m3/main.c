#include<stdlib.h>
#include <stdio.h>

int alish(int a, int b)
{
  
    int *aP = &a; 
    int *bP = &b; 
    *aP=*aP+*bP;   // 1=1+2;==3
    *bP=*aP-*bP;   // 2 = 3-2; ==1
    *aP=*aP-*bP;  // 3= 3-2; == 2

    return *aP;
   // return *bP;
  
   
}

int main()
{
    int a = 15, b = 10;

    printf("a:%d\nb:%d", alish(a,b));
   

        return 0;
}
// VOID BN ISHLANGAN
// void alish(int a, int b)
// {

//     int *aP = &a;
//     int *bP = &b;
//     *aP = *aP + *bP; // 1=1+2;==3
//     *bP = *aP - *bP; // 2 = 3-2; ==1
//     *aP = *aP - *bP; // 3= 3-2; == 2

//     //return *aP,*bP;
//     printf("a:%d\nb:%d", *aP, *bP);
// }

// int main()
// {
//     int a = 15, b = 10;

//     // printf("a:%d b:%d", alish(a, b));
//     alish(a, b);

//     return 0;
// }

// int alish(int a,int b)
// {
//     int c;
//     int *aP=&a; // a ni adresini aniqladim
//     int *bP=&b; // b ni adresini aniqladim
//     c=*bP; //c ga b ni adresi bn murojat qilib c ga tengladim
//     b=*aP; // b ga a ni adresi bn murojat qilib b ga tengladim
//     a = c; // a ga c ni tengladim( c da b ni qiymati bor edi)

//     return b;

// }


// int main ()
// {
//     int a=1,b=2;

//     printf("%d",alish(a,b));



//     return 0 ;
// }