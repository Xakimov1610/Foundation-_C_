#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,user,sanoq=0;
     printf("son kiriting:");
        scanf("%d",&a);
        sanoq+=a;
    while (1)
    {
        printf("\nyana son kiritasizmi?\n1.ha\n2.yoq\n");
        scanf("%d",&user);

        if (user==1/*user=="Ha" ||user=="ha"*/)
        {
            printf("son kiriting:");
            scanf("%d",&a);
            sanoq+=a;
        }
        else if (user ==2/*user=="yoq" || user=="Yoq"*/ )
        {

            printf("javob:%d",sanoq);
             break;
        }
        else if (user!=1 || user!=2 )
            {printf("\nto'gri buyruq kiriting!\n");}
    }

    return 0;
}
