#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int parol1;
   char login1 [15] = "";
   int parol = 12345;
   char login[10] = "admin";
   int amal;
   int belgi = 3;

   printf("Parol kiriting :");
   scanf(" %d", &parol1);
   printf("Login kiriting :");
   scanf(" %s", &login1 );

   if(parol1 == parol && strcmp(login1, login) == 0){
        printf("Tug'ri kiritildi ! O'zgartirasizmi ?\n1.Ha\n\n2.Yo'q\n");
            scanf("%d", &amal);
            switch (amal){
                case 1:
                    printf("Ha\n");
                    printf("login va parol kiriting :");
                    scanf("%s %d", &parol1 , &login1);
                    printf("Saqlandi");
                    break;
                case 2:
                    printf("Yo'q\n");
                    printf("Saqlandi\n");
                    break;
            }
   }

    else {
        printf("Hato kiritildi\n");
    while(0 < belgi){

        belgi--;

        printf("3ta imkoningiz qoldi\n");
        scanf("%s",&belgi);

        printf("2 ta imkoningiz qoldi\n");
        scanf("%s",&belgi);

        printf("Ohirgi imkoningiz \n");
        scanf("%s",&belgi);
    break;
    }
     }

    printf("Uzur tizimga ruxsat yo'q !");



    return 0;
}





