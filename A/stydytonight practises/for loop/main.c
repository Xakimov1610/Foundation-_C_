/*#include<stdio.h>

int main()
{

    printf(" --------  \v");
    printf("|        |\v");
    printf("|        |\v");
    printf("|        |\v");
    printf("|        |\v");
    printf("|________|\v\n");


 printf("hello\t");  printf("there\t");  printf("world\t");
    return 0;
}
*/
/*
#include<stdio.h>
// WHILE LOOP
int main()
{
     int i = 0;  // declaration and initialization at the same time

    printf("Printing numbers using while loop from 0 to 9\n\n");


    while(i<10)
    {
        printf("%d\n",i);

        i++;    // same as i=i+1;
      }
    printf("\nCoding is Fun !\n");
    return 0;
} */
/*
#include<stdio.h>
// DO WHILE
int main()
{
    int i = 10;     // declaration and initialization at the same time

    do // do contains the actual code and the updation
    {
        printf("%d\n",i);
        i = i-1;    // updation
    }
    // while loop doesn't contain any code but just the condition
    while(i > 0);

    printf("\n\The value of i after exiting the loop is %d\n\n", i);

    return 0;
} */


#include<stdio.h>

int main()
{

    int i,j,k;
    printf("   Output of the nested loop is :\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("\t\t\t\t");
        for(j = 0; j < 10; j++)
        printf("* ");

        printf("\n");
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
