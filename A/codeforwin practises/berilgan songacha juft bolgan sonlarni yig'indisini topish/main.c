#include <stdio.h>
#include <stdlib.h>

int main()
{
    // berilgan songacha juft sonlarni topish
  /* int i ,n=10,sum=0;

   for (i=0;i<=n;i+=2)
   {
       sum+=i;
   }
   printf("%d",sum);
*/

int i,start,end,sum=0;

printf("starting point:");
scanf("%d",&start);
printf("ending point:");
scanf("%d",&end);

if (start%2!=0)
{
    start++;
}
for (i=start;i<=end;i+=2)
{
    sum=sum+i;
}
printf("%d\n",sum);












    return 0;
}
