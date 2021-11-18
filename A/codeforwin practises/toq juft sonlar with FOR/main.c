#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int a,n;
    printf("son kiriting:");
    scanf("%d",&n);

    for (a=2;a<=n;a+=2)
    {
        printf("%d\n",a);
    }
    */


    int start,end;
    printf("boshlanuvchi son:");
    scanf("%d",&start);
    printf("tugash son kiriting:");
    scanf("%d",&end);

        if(start%2 != 0)  // agar kiritilgan son toq bolsa
    {
        start++;
    }
    for (start;start<end;start+=2
    )
    {
        printf("%d\n",start);
    }




    return 0;
}
