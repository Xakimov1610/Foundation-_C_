/*#include<stdlib.h>
int main ()
{

    int user;
    scanf ("%d",&user);
    int my_array[10]={3,5,-4,0,15,88,-2,9,7,1};

    int son[9]={};

    for (int i=0; i<10;i++)
    {
        if (i==user)
        continue;

        son[i]=my_array[i];


    }

    for (int i=0; i<10;i++)
    {
        printf("%d\n",son[i]);
    }


    return 0;
} */






#include <stdlib.h>
int main()
{
    int a,b;
    printf("ikki son:");
    scanf("%d %d",&a,&b);
    int  my_son[11] ={};
    int my_array[10] = {3, 5, -4, 0, 15, 88, -2, -9, 7, -1};
   //  printf(" bu son:%d",b);

    for (int i=0,j=0; i<=11,j<10;i++,j++)
    {

        if (a==i)
        {
            my_son[i]=b;
            i++;
           //continue;
        }
       my_son[i]= my_array[j];

       printf("%d\n",my_son[i]);
    }

    return 0;
}
