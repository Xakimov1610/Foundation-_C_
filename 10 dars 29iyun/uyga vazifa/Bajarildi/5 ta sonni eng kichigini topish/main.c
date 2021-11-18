#include <stdio.h>
#include <stdlib.h>


int main()
{
    while (1){
    int a,b,c,d,e;
    printf("5 ta son kiriting:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a<b && a<c&&a<d && a <e)
    {
        printf("%d eng kichik raqam\n",a);
    }
   else if (b<a && b<c && b<d && b <e)
    {
        printf("%d eng kichik raqam\n",b);
    }
   else  if (d<b && d<c && d<a && d <e)
    {
        printf("%d eng kichik raqam\n",d);
    }
     else  if (e<b && e<c && e<a && e <d)
    {
        printf("%d eng kichik raqam\n",e);
    }
    else {printf("%d eng kichik raqam\n",c);}


  if (a>b && a>c&&a>d && a >e)
    {
        printf("%d eng katta  raqam\n",a);
    }
   else if (b>a && b>c && b>d && b >e)
    {
        printf("%d eng katta  raqam\n",b);
    }
   else  if (d>b && d>c && d>a && d >e)
    {
        printf("%d eng katta  raqam\n",d);
    }
     else  if (e>b && e>c && e>a && e >d)
    {
        printf("%d eng katta raqam\n",e);
    }
    else {printf("%d eng katta raqam\n",c);}



        }


    return 0;
}
