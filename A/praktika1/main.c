#include <stdio.h>
#include <stdlib.h>

int main (){
 char ism[20];
 int yosh;
 char kv[10];
 int kvar;


 printf("ISMINGIZ:");
 scanf("%s",ism);
 printf("yoshingiz:");
 scanf("%d",&yosh);
 printf("qayerdan kvartira qidiryapsiz:");
   scanf("%s" ,kv);
 printf("nechinchi kvartaldan:");
 scanf("%d",&kvar);


 printf("Assalomu alaykum %s ,qalaysiz,sizning yoshingiz %d da,siz hozi %s dan kvartira qidiryapsiz chunki najot talimda oqiysiz shuning uchun %s-%d kvartaldan qidiryapsiz ,sabr qiling RAYHONDAN CHIQIB QOLAR",ism,yosh,kv,kv,kvar);







return 0;
}
