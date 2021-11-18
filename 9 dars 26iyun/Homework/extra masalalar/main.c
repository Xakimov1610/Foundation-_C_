#include <stdio.h>
#include <stdlib.h>

int main()
{


    // sonnni teskarisini yozish
     int son;
    printf ("son kiriting:");
    scanf("%d",&son);

    while (1)
    {



    int birlar,onlar,yuzlar,minglar,onminglar;
    birlar=son%10; // 5 ni oldik
    onlar=son/10%10; // 4 ni oldik
    yuzlar=son/100%10; // 3ni oldik
    minglar=son/1000%10; // 2 ni oldik
    onminglar=son/10000; // 1 ni oldik

    printf("%d%d%d%d%d",birlar,onlar,yuzlar,minglar,onminglar);

    break;
 }




/*

    // FACTORIAL
    int son=1,user,a=1;
    printf("son kiritng: ");
    scanf("%d",&user);

    while (son<=user)
    {
        a=a*son;
        son++;



    }
     printf("%d\n",a);

    */











// TUB YOKI TUB EMAS
   /* int son;

    printf("son kiritng:");
    scanf("%d",&son);



     if (son==2)
    {
        printf("TUB");
    }
    else if (son%3==0 || son%2==0 )
    {
        printf("TUB EMAS");
    }
    else {printf("TUB");}*/



  /*  int a=1, n;

    printf("son kriting: ");
    scanf("%d", &n);

    while (a<n)
    {
        if (n%a==0)
            printf("tub emas");
        else if (n%a!=0
    } */




    return 0;
}
