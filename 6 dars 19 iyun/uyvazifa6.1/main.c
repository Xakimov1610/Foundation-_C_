#include <stdio.h>
#include <stdlib.h>

int main()
{


    int taxmin;
    int son=15;

    printf("son kiriting:");
    scanf("%d",&taxmin);

        if  ( taxmin == son )
        {
        printf("SIZ YUTDIZ");
        }
        else if ( taxmin < son )
        {
        printf("kattaroq son kiriting:");
        scanf("%d",&taxmin);
        }

       else if (taxmin >son){
        printf("kichikroq son kiriting:");
        scanf("%d",&taxmin);
    }
        else
        {
        printf("NOTOGRI");
        }

            return 0;
}

/*
    if ( taxmin == son ) {

        printf("TABRIKLAYMIZ YUTDINGIZ");
    }
    else if (taxmin >=0 || taxmin <=10) {

        printf("kattaroq son yozing:");
        scanf("%d",&taxmin);
    }
    else if ( taxmin == son ) {

        printf("TABRIKLAYMIZ YUTDINGIZ"); }

    else if (taxmin >=10 || taxmin <=20 )
    {
        printf("kichikroq son kiriting:");
        scanf("%d",&taxmin);
    }

     else if ( taxmin == son ) {

        printf("TABRIKLAYMIZ YUTDINGIZ"); }

     else {
        printf("invalid number");
     }
*/


