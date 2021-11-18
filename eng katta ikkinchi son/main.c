#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int a,b=0,c=1;
    printf("5 xonalik son kiriting:");
    scanf("%d",&a);

        while(a){
            c=a%10;
           b=b*10+c;

        a/=10;

    }
    printf("%d",b); */


  /*  int a,b,c,d,e,m;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

*/
  /*  if (a>b)
      b=a;

  else  if (b<c)
        b=c;
  else  if (b<d)
        b=d;*/
  /* else if (b<e)
        b=e;*/

  /*  if (b>e)
        printf("%d",e);
    else if (b<e)
        printf("%d",b);*/
   /* if (a>b && b>c && b>e)
        {
            printf("ikkinchi katta son %d",b);
        }
        else if (c>d &&  c>b && c>e)
        {
            printf("ikkinchi katta son %d",c);
        }
      else   if ( d>c && d>b && d>e && d<a)
        {
            printf("ikkinchi katta son %d",d);
        }
      else   if ( e>c&& e>b && e>d && e<a)
        {
            printf("ikkinchi katta son %d",e);
        }
         else   if (a>b && a>c&& a>d && a>e && a<a)
        {
            printf("ikkinchi katta son %d",a);
        }










  //  printf("%d",b);
*/



      int a,b,c,d,e,aa,bb,cc,dd,ee;
      printf("5 ta son kiriting:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a<b)
        a=b;
    if (a<d)
        a=d;
    if (a<c)
        a=c;
    if (a<d)
        a=d;
    if (a<e)
        a=e;

    if (b>d && b>c && b>e && b<a)
    {
        printf("%d 2-katta son\n",b);
    }
   else   if (b<d && d>c && d>e && d<a)
    {
        printf("%d 2-katta son\n",d);
    }
  else   if (c>d && c>e && c>b && c<a)
    {
        printf("%d 2-katta son\n",c);
    }
  else   if (e>d && e>c && e>b && b<a)
    {
        printf("%d 2-katta son\n",e);
    }
   // printf("%d katta son",e);




    return 0;

}
