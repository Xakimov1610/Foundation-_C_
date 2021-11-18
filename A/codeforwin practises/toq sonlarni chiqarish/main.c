#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int a;

   for (a=1;a<10;a+=2)
   {
       printf("%d\n",a);
   }*/

   /*
   int i, n;

    // Input upper limit from user
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    // Start loop from 1 and increment it by 1
    for(i=1; i<=n; i++)
    {
        // If 'i' is odd then print it
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
*/

    /*
    int i,n;
    printf("toq sonlar nechigacha bo'lsin:");
    scanf("%d",&n);

    for (i=1;i<n;i+=2)
    {
        printf("%d\n",i);
    }
    */
    int i,start,end;
    printf("boshlanish sonni kiriting:");
    scanf("%d",&start);
     printf("tugash sonni kiriting:");
    scanf("%d",&end);

    if (start%2==0)
    {
        start++;
    }

    for (i=start;i<end;i+=2)
    {
        printf("%d\n",i);
    }










    return 0;
}
