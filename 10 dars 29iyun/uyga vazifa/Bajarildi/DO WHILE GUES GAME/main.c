#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{
    // FOUND
    srand(time(NULL));
   // int secret=rand() % 20,son;
   int secret=10,son;
     printf("son kiriting:");
    do
    {scanf("%d",&son);

        if (son>secret)
            printf("kichikroq son kiriting:");
        else if (son<secret)
            printf("kattaroq son kiriting:");
    }
    while (son!=secret);
    printf("Topdingiz!!!");
    return 0;
}
