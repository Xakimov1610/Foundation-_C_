#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct najot {
    char ism[20];
    char familya[20];
    int yosh;
    char jinsi[10];
    char til[20];
};
int main()
{
    system("cls");
    struct najot student1;
    char ismU[20];
    char familyaU[20];
    int yoshU;
    char jinsiU[10];
    char tilU[20]="ingliz rus";



    printf("Ismingiz\nfamilyangiz\nyoshingiz\njinsingiz\nqaysi tillarni bilasiz\n");
   
    scanf("%s %s %d %s", ismU, familyaU, &yoshU, jinsiU);
    
    //gets(tilU);

    // ISHLAMADI
    // scanf("%s", ismU);
    // scanf("%s", familyaU);
    // scanf("%d", &yoshU);
    // scanf("%s", jinsiU);
    // gets(tilU);

    strcpy(student1.ism,ismU);
    strcpy(student1.familya,familyaU);
    student1.yosh=yoshU;
    strcpy(student1.jinsi,jinsiU);
    strcpy(student1.til,tilU);

    if (strcmp(jinsiU,"erkak")==0)
    {
        printf("Ism:%s\nFamilya:%s\nYoshingiz:%d\nJinsi:%s\nTil:%s", strupr(student1.ism), strupr(student1.familya), student1.yosh, strupr(student1.jinsi), strupr(student1.til));
    }
    else
        printf("Ism:%s\nFamilya:%s\nYoshingiz:%d\nJinsi:%s\nTil:%s", student1.ism, student1.familya, student1.yosh,student1.jinsi,student1.til);


    return 0;
}














/*
#include <stdio.h>
#include <string.h>

struct korxona {
    char ism[10];
    char familya[10];
    int yosh;
    int maosh ;



}xodim;
int main()
{
        system("cls");
         struct korxona tanlov;
        char tism[10]="alyor";
        char tfamilya[20]="tolanov";
        int tyosh=10;
        int tmaosh=120000;

        strcpy(tanlov.ism,tism);
        strcpy(tanlov.familya,tfamilya);
        tanlov.yosh=12;
        tanlov.maosh,1500000;

        printf("ism:%s\nfamilya:%s\nyosh:%d\nmaosh:%d\n",tanlov.ism,tanlov.familya,tanlov.yosh,tanlov.maosh);

        char ismu[10];
        char familyau[10];
        int yoshu;
        int maoshu;
        scanf("%s %s %d %d",ismu,familyau,&yoshu,&maoshu);


    strcpy(xodim.ism,ismu);
    strcpy(xodim.familya,familyau);
    xodim.yosh=yoshu;
    xodim.maosh=maoshu;

    printf("\n\nISM:%s\nFAMILYA:%s\nYOSH:%d\nMAOSH:%d",ismu,familyau,yoshu,maoshu);



    return 0;
}*/