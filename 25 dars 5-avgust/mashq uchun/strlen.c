#include <stdio.h>
#include <string.h>


int main()
{

char ism[20]="Mirilyos";
int uzun = strlen(ism);
printf("%d\n",strlen(ism));
printf("%d\n",strlen(ism));


   for (int i = 0; i <uzun; i++)
   {
    printf("%c\n",ism[i]);
   }
   

return 0;
}