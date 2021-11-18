#include <stdio.h>
#include <stdlib.h>

/*int main_12()
{
   int a=0,b=1,c=a+

   printf("son kiriting:");
   scanf("%d",&c);

   while (a<=c)
   {
       g=a+b;
       f=c+b;
       d=f+c;
       printf("%d\n",d);
       a++;

   }

    return 0;
}
*/


int main12()
{
 int a=0;
 int b=1;
 int c=a+b;
 int d=1,e;

 scanf("%d",&e);
 int f=e-2;


 while(1)
 {
   a=b;
   b=c;
   c=a+b;

  d++;
  if(d==f)
  {
   printf("%d",c);
   break;
  }
 }


 return 0;
}

int main() {
int son,count=0;
scanf("%d",&son);

do {
    count++;
    son/=10;
}
while (son!=0);
printf("%d",count);







return 0;
}
