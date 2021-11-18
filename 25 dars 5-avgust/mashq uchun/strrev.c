#include <stdio.h>
#include <string.h>

int main()
{
  system("cls");

    char ism[10];
    char ism2[10];

    scanf("%s",ism);

    strcpy(ism2,ism);

    strrev(ism2);

     printf( strcmp(ism,ism2)==0 ? "polindrom" : "deng");
    
















//    char ism[10];
//    char ism2[10];

//    scanf("%s",ism);

//    strcpy(ism2,ism);
  
//     strrev(ism2);
//   if (strcmp(ism,ism2)==0)
//     printf("polindrom");
//   else 
//     printf("deng");
  
    













    return 0;
}