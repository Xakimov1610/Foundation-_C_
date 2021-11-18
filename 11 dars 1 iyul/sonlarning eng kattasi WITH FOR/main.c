#include <stdio.h>
#include <stdlib.h>

int main_12()
{
/*
   int a,b,c,d,e;
    printf("5 ta son kiriting:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

   if (a<b)
    a=b;
   if(a<c)
    a=c;
   if (a<d)
    a=d;
   if (a<e)
    a=e;
   printf("%d eng katta son\n",a);
*/

   int son,user,max;
        printf("son kiriting:");
        scanf("%d",&user);
        max=user;

    for (son=1;son<5;son++)
 {
        printf("son kiriting:");
        scanf("%d",&user);

    if (user > max)
        max=user;
 }
        printf("%d eng katta son",max);




    return 0;
}
#include<stdlib.h>
int main () {
    int a,b,max;
    printf("son kiriting:");
    scanf("%d",&b);
    max=b;

    for (a=1;a<5;a++)
    {
        printf("son kiritng:");
        scanf("%d",&b);
        if (max<b)
            max=b;

    }
printf("%d eng katta son",max);




}







