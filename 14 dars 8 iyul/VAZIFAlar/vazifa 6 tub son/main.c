#include <stdio.h>
#include <stdlib.h>

int main()
{
    int son,sanoq=0;
    scanf("%d",&son);

    for (int i=1; i<=son;i++)
    {
        if (son%i==0)
            sanoq++;

    }

     if (sanoq==2)
        printf("tub",sanoq);

    else {  printf("murakkab"); }


    return 0;
}




/*
// xato ishlangan!
int son,sanoq=0;
    printf("son:");
    scanf("%d",&son);

    for (int a=2; a<=son; a++)
    {
        if (son%1==son || son/son==1 && son/2!=0)
        {
            printf("tub son");
            break;
        }
        else {printf("murakkab son");}
    }


      */
