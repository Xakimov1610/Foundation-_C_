#include <stdio.h>
#include <stdlib.h>

int qosh(int a,int b)
{
    return a+b;
}
int main()
{

    int son1,son2;
    scanf("%d %d",&son1,&son2);

    printf("%d",qosh(son1,son2) );




/*2 ta sonni qoshish uchun function yozing
song foydalanuvchi 2 ta son kiritadi , shu funksiya yordamida
qoshish*/
return 0;
}