#include <stdio.h>
#include <stdlib.h>

int main()
{
   char grade;

   printf("grade:");
   scanf("%c",&grade);

   if (grade == 'A')
   {
       printf("bahoyingiz a'lo");
   }
   else if (grade == 'B')
   {
       printf("bahoyingiz yaxshi");
   }
    else if (grade == 'C')
   {
       printf("bahoyingiz yomon");
   }
   else {
    printf("yiqildingiz!!!");
   }
    return 0;
}
