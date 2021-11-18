/*
#include <stdio.h>
#include <stdlib.h>

int main_7()
{
   // 7-MASALA

   int natija=0;
   printf("2 son kiriting:");
   scanf("%d %d",&a,&b);

   for (int a; a<=b;a++)
   {
        if (a%7==0)
        natija+=a;
   }
   printf("\n%d",natija);
    return 0;
}


int main_6()
{
   // 6-Masala
   int a,b;
   printf("ikki son kiriting:");
   scanf("%d %d",&a,&b);

   for (a;a<b;a++)

       if (a%11==0)
        printf("%d\n",a);

   return 0;
  }



  int main_5()
{
    //5-Masala
   int a=24,b=43;

   for(a;a<=b;a++)
    {
        if (a%5==0)
        printf("%d\n",a);
    }


return 0; }

int main_4 () {
    // 4-Masala
    int a=-23,b=16;

    for (a;a<=16;a++)
        printf("%d\n",a);

return 0;
}

/*int main()_3 {
    // 3-Masala
    int a;
    printf("4 xonalik son kiriting");
    scanf("%d",&a);

    printf("natija:%d",a%100/10+a/100%10);

return 0;
}


int main_2() {
// 2-Masala
int baho;
printf("Bahoyingizni kiriting:");
scanf("%d",&baho);

switch(baho){
case 5:
    printf("A'lo");
    break;
case 4:
    printf("Yaxshi");
    break;
case 3:
    printf("Qoniqarli");
    break;
case 2:
case 1:
    printf("Deng!!!");
    break;
default:
    printf("Bunday baho yo'q");
}
return 0;
}

int main() {
//1-Masala
  int a,b;
     printf("ikki son kiriting:");
    scanf("%d %d",&a,&b);

     printf("natija:%d",a+b);

return 0;
}


*/
/*
#include <stdio.h>
#include <math.h>

int main() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
    return 0;
}
*/
