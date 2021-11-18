#include<stdlib.h>
#include <stdio.h>

void alish(int *Pson,int *Pson2)
{
    *Pson=*Pson+*Pson2;   //  1+2=3
    *Pson2=*Pson-*Pson2;  //  2=3-2=1
    *Pson=*Pson- *Pson2;  //  3=3-1      
    printf("son 1:%d \nson 2:%d",*Pson,*Pson2);
}


int main()
{
    int son,son2;
    scanf("%d %d",&son,&son2);

    alish(&son,&son2);

    return 0;
}