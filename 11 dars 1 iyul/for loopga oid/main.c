#include <stdio.h>
#include <stdlib.h>

int main_1()
{

    for( int son=1; son<=800; son++)
    {
        printf("%d\n",son);
    }
    return 0;
}
int main_2 () {
    for (int son=1000;son>=1;son--)
    {
        printf("%d\n",son);
    }

}

int main_3 () {
    for(int son=400;son<=500;son++)
    {
        printf("%d\n",son);
    }
}

int main_4 ()
{
    for(int son =300; son>=150;son--)
    {
        printf("%d\n",son);
    }
}

int main_5 () {
    for (int son=-400;son<=150;son++)
    {
        printf("%d\n",son);
    }

}

int main_6 () {
    for (int son=200; son>=-500;son--)
    {
        printf("%d\n",son);
    }
}
int main_7 () {
    for (int son=1;son<=140;son++)
    {
        if (son%2==0)
        {
            printf("%d\n",son);
        }
    }
}

int main_8 () {
    for (int son=100;son<240;son++)
    {
        if (son %2==1)
        {
            printf("%d\n",son);
        }
    }
}


int main_9 () {
    for (int son=40;son <=180;son++)
    {
        if (son%7==0)
        {
            printf("%d\n",son);
        }
    }

}

int main_10 () {
    for (int son= 50;son <440; son++)
    {
        if (son%11==0)
        {
            printf("%d\n",son);
        }
    }

}


int main_11 () {

    for (int son=90;son<210;son++)
    {
        if (son%25==0)
        {
            printf("%d\n",son);
        }
    }
}


int main_12 () {
    for (int son=25; son<690;son++)
    {
        if (son%5==0 && son%9==0)
        {
            printf("%d\n",son);
        }
    }
}

int main_13 () {
    for (int son=1; son<4000; son++)
    {
        if (son%11==0 && son%9==0)
        {
            printf("%d\n",son);
        }
    }
}


int main_14  () {

for (int son=20; son<420;son++)
{
    if (son %5==0 && son%10!=0)
        printf("%d\n",son);
}

}

int main_15 () {
    int a,b;
    printf("son kiriting:");
    scanf("%d",&b);
    for ( a; a<=b;a++)
    {
        printf("%d\n",a*a);
    }

}

int main () {

int a,b;
printf("son kiriting:");
scanf("%d",&b);

    for ( ; a*a<b;a++)
    {
        printf("%d\n",a*a);
    }

}
