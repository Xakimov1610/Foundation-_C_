#include <stdio.h>
#include <stdlib.h>
/*
int main12()
{
   int son,a=1;

   printf("son kiriting:");
   scanf("%d",&son);

   while (a <= son)
   {

       a++;
   }

    return 0;
}




int main()
{
  int n, first = 0, second = 1, next, c=0;

  printf("Enter the number to find the its fibanacci:\n");
  scanf("%d", &n);

  printf("%dth fibanacci:\n", n);

 while ( c < n)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    c++;
  }
  printf("%d\n",next);
  return 0;
}


*/




int main()
{
    int a=0,b=1,sanoq=1,n,c;


    scanf("%d",&n);

    while (sanoq<n)
    {
                       1      2      3      4      5     6       7         8
        c=a=0+b=1;    0+1    1+1=2  1+2=3  2+3=5  3+5=8 5+8=13  8+13=21  13+21=34
        a=0=b=1;      0=1    1=1    1=2    2=3    3=5   5=8     8=13     13=21
        b=1=c=1;      1=1    1=2    3=3    3=5    5=8   8=13    13=21    21=34
        d++;


        c=a+b;   2   3 5  8  13
        a=b; a=1 a=1 2 3  5  8
        b=c; b=1 b=2 3 5  8  13
        d++;

        c=a+b;
        a=b;
        b=c
        sanoq++;
    }
     printf("%d\n",a);

}














