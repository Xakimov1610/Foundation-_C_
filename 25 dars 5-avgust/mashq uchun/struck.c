#include <stdio.h>
#include <string.h>

struct korxona {
  char  xodim[20];
   int yosh;
   char ism[10];
   int  maosh;
} zavod;

int main()
{
    system("cls");
    strcpy(zavod.xodim,"adminstrator");
    strcpy(zavod.ism,"toshmat");
    zavod.yosh=20;
    zavod.maosh=12000;

    printf("xodim: %s \nism:%s \nyosh:%d \nmaosh:%d",zavod.xodim,zavod.ism,zavod.yosh,zavod.maosh);






    return 0;
}