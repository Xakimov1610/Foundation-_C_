#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a[10];
 float b;

 for(int i=0; i<10; i++)
 {
  scanf("%f",&a[i]);
 }
 for(int i=0; i<10; i++)
 {
  b+=a[i];
 }
 int c = b;
 int d = c % 10;
 int f = c/10;

 if(d>1 && d<5)
 {
  printf("%d",c);
 }
 else
 {
  printf("%d",c+1);
 }

   
        return 0;
}



/*#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    
    float a,b;
    float arr[10] = {};
    for (int  i = 0; i < 10; i++)
    {
        scanf("%f",&arr[i] );
    }
 
    for (int i = 1; i < 10; i++)
    {
        arr[0]+=arr[i];
    }
  //printf("%f",arr[0]);
    a=arr[0]/10;
    b=(a*10)%10;
    
    printf("%f",b);
    //1, 15, 2, 5, 21, 9

        return 0;
}*/