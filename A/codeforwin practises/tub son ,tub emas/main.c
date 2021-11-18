#include <stdio.h>
#include <stdlib.h>

int main12()
{
   int tub=1,a;
   scanf("%d",&a);
    for(int b=2;b<a;b++)
    {
        if ( a%b==0)
        {
            tub=0;
            break;
        }
    }

    if (tub)
    {
        printf("tub");
    }
    else {printf("tub emas");}

    return 0;
}


int main(){
    int tub=1,son,a;
    scanf("%d",&son);
    for ( a=2; a<son; a++)
    {
        if (son%a==0)
        {
            tub=0;
            break;
        }


    }
    if (tub) {
        printf("tub");
    }
    else {printf("tub emas ");}


return 0;
}

