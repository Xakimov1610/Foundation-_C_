#include<stdio.h>
#include<stdlib.h>

int tub(int a)
{
    int b=a+1;
  /*  int sanoq=0;
    for (int i = b; sanoq!=2; i++)
    {
        for (int i = 1; i <= b; i++)
        {

            if (a %i==0)
            {
              sanoq++;
            }
        }
        if (sanoq==2)
        {
            printf("%d",b);
            break;
        }

    }

} */
int main()
{
    int son;
    scanf("%d",&son);

    int sanoq=0;

        for (int i = 1; i <= son; i++)
        {

            if (son % i==0)
            {
              sanoq++;
            }
        }
        if (sanoq==2)
        {
            printf("%d tub",son);

        }

}

  //  printf("%d",tub(son) );






    return 0;
}
