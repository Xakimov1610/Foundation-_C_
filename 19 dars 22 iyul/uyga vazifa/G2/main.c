#include <stdio.h>
#include <stdlib.h>

float bolish(float a, int b)
{
    return a / b;
}

int main()
{

    int son1, son2;
    scanf("%d %d", &son1, &son2);

    printf("%f", bolish(son1, son2));

    /*2 ta sonni bolish uchun function yozing
song foydalanuvchi 2 ta son kiritadi ,
 shu funksiya yordamida
qoshish*/
    return 0;
}