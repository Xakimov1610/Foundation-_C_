#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a,b;
    char c;
    printf("2 matematik amal kiriting:");
    scanf("%f %c %f",&a,&c,&b);

    switch(c) {

    case '*':
    printf("natija:%.0f",a*b);
    break;

     case '/':
    printf("natija:%,0f",a/b);
    break;

     case '+':
    printf("natija:%.0f",a+b);
    break;
     case '-':
    printf("natija:%.0f",a-b);
    break;
     case '%':
    printf("natija:%d",(int)a%(int)b);
    break;

    default:
        printf("error");
        break;








    }




    return 0;
}
