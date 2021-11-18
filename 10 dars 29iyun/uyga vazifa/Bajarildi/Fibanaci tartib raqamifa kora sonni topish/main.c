#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a=0,b=1,tartib_raqam=1,son,c;

        printf("fibanacci tartib raqamini kiriting:");
        scanf("%d",&son);

    while (tartib_raqam<son)
    {
         /*           1      2      3      4      5     6       7         8
        c=a=0+b=1;    0+1    1+1=2  1+2=3  2+3=5  3+5=8 5+8=13  8+13=21  13+21=34
        a=0=b=1;      0=1    1=1    1=2    2=3    3=5   5=8     8=13     13=21
        b=1=c=1;      1=1    1=2    3=3    3=5    5=8   8=13    13=21    21=34
        d++;


        c=a+b;   2   3 5  8  13
        a=b; a=1 a=1 2 3  5  8
        b=c; b=1 b=2 3 5  8  13
        d++;        */

        c=a+b;
        a=b;
        b=c;
        tartib_raqam++;
    }
    printf("%d\n",a);   // a NI PRINT QILAMIZ CHUNKI TARTIB RAQAM KIRITGANIMIZDA a shunga tori keladi,masalan  6-tartibdagi son 5

return 0; }




// BOSHQACHA YO'LI

/*
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
void fibonacci(int num);
void main()
{
    int num = 0;
    //clrscr();
    printf("Enter number of terms\t");
    scanf("%d", &num);
    fibonacci(num);
    getch();
}

void fibonacci(int num)
{
   int a, b, c, i = 3;
   a = 0;
   b = 1;
   if(num == 1)
   printf("%d",a);

   if(num >= 2)
   printf("%d\n%d",a,b);

   while(i <= num)
   {
      c = a+b;
      printf("\n%d", c);
      a = b;
      b = c;
      i++;
   }
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
// INCORRECT !!! -FIBANACCI SERIYA SONLARNI CHIQARADI FAQAT
int main()
 {

    int a = 0, b = 1, son, user,sanoq = 1;  // O'zgaruvchi e'lon qilaman
    printf("Birorta son kiriting:");    // Son kiritilishini so'rayman
    scanf("%d",&user);                  // Kiritilgan sonni olaman
    printf("%d\n%d\n",a,b);               // a va b ni ekranga chiqarib olaman

    son = a+b;                          // son ga a va b ni qiymatini beraman
    while (son< user){                 // son user kiritgan sondan kichik ekanini ekshiraman
printf("%d\n",son);
                                 // a ning qiymatini bittaga oshiraman
        a = b;                          // a ning qiymatini b ga o'zgartiraman
        b = son;                        // b ning qiymatiga sonning qiymatini beraman
        son = a + b;
          a++;
                              // sonni qiymati a va b larning yig'indisiga tenglashtiraman
    }
                    // sonni ham ekranga chiqaraman

  return 0;
 }*/
