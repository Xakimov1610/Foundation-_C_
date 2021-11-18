#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int i=0;
char katta(char sozlar)
{

            if (sozlar[i]=='\0')
                  return 'a';

        if (isupper(sozlar[i]))
        {
           return katta(sozlar[i]+1);
       
        }
        
        return katta(sozlar+1);

   
}


int main()
{
    char sozlar[20]="hammaga alom";

   
   printf("%c",katta(sozlar));
    return 0;
}























// void funk(int *arr,int uzun)
// {
// for (int i = 0; i < uzun; i++)
// {
//     if (i%2==0)
//         printf("%d\n",arr[i]*2);
//     else 
//         printf("%d\n",arr[i]-1);
// }

// }


// int main()
// {

// int arr[5]={1,2,3,4,5};

// int uzunlik=sizeof(arr)/sizeof(arr[0]);
// funk(arr,uzunlik);


// C1
// int array[10]={1,2,3,4,5,6,7,8,9,10};

// for (int i = 0; i < 10; i++)
// {
//     scanf("%d",&array[i]);
// }

// for (int i = 0; i < 10; i++)
// {
//     if (array[i]==5)
//     {
//       printf("bor");
//       break;
//     }
   
//     if (i==9)
//         printf("yo'q");
// }









// A 12
// int son;

// for (int i = 78; i < 112; i++)
// {
//    if (i%5==0)
//         continue;
//         printf("%d\n",i);
// }







// vazifa6
// int son;
// scanf("%d",&son);
// int sanoq=0;
// for (int i = 1; i <=son; i++)
// {
//     if (son%i==0)
//        sanoq++;
// }
// printf( sanoq==2 ? "tub" : "deng");


//vazifa6
// int son;
// scanf("%d",&son);
// int yigindi=0;
// for (int i = 1; i < son; i++)
// {
//     if (son%i==0)
//       yigindi += i;
    
// }
// if (yigindi==son)
//     printf("mukammal");
//     else
//         printf("deng");
   
    










//vazifa4
// int son,son2;
// int nn=1;
// scanf("%d %d",&son,&son2);

// for (int i = 0; i < son2; i++)
//     nn*=son;

// printf("%d",nn);







// vazifa3
// int son;
// scanf("%d",&son);

// for (int i = 1; i <= son; i++)
// {
//  if (son%i==0)
//     printf  ("%d\n",i);
// }


// vazifa2
// int son;
// scanf("%d",&son);
// for (int i = 0; son !=0; i++)
// {
//     printf("%d",son%10);
//     son/=10;
// }

// vazifa 1
// int son;
// scanf("%d",&son);
// int sanoq=1;
// for (int i = 0; son/10>0; sanoq++,son/=10)
// {
    
// }
// printf("%d",sanoq);
 