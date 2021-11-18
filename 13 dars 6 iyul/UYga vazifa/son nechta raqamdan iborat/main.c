#include <stdio.h>

int main()
{
     int son;
     int sanoq=0;

     printf("son kiriting: ");
     scanf("%d", &son);


        for ( ;son!=0;son/=10,sanoq++ )
        {
            //sanoq++;
        }
        printf("%d xonalik son",sanoq);



    return 0;
}





int main_12()
{
    int son;
    int sanoq=0;

     printf("son kiriting: ");
    scanf("%d", &son);

    if (son!=0)
    {
        for ( ;son!=0; )
        {
            son/=10;
            sanoq++;
        }
        printf("%d xonalik son",sanoq);
    }

    else {printf("1 xonalik son");}


    return 0;
}













/*
    long long num;
    int count = 0;

    // Input number from user
    printf("Enter any number: ");
    scanf("%lld", &num);

    // Run loop till num is greater than 0
    do
    {
        // Increment digit count
        count++;

        // Remove last digit of 'num'
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);
    */
