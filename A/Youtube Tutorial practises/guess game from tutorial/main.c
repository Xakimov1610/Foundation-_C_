#include <stdio.h>
#include <stdlib.h>

int main()
{


     printf("hello:");
     int son=10;
     int guess;
     int guesscount;
     int guesslimit;
     int outofguess;


     while (guess!=son && outofguess==0 )
     {
         if (guesscount<guesslimit)
         {
            printf("son kiriting:");
            scanf("%d",&guess);
            guesscount++;
         }
         else
         {
             outofguess==1;
         }
     }
     if (outofguess==1)
     {
         printf("out of guesses");
     }
     else {
        printf("YOU WIN!!!");
     }






    return 0;
}
