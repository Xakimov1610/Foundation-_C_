#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// masala 11 , 1-qism
void sort (int *arr)
{
    int alish=0;
    for (int i = 0; i < 10; i++)
    {
       for (int k = i+1; k < 10; k++)
       {
         if (arr[i]>arr[k])
         {
            alish=arr[i];
            arr[i]=arr[k];
            arr[k]=alish;
         }
       }
    } 
}

// masala 11 , 2-qism
int main()
{
    int array[10]={};
    for (int i = 0; i < 10; i++)
    {
       scanf("%d",&array[i]);
    }
    
    sort(array);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }





    // int main(){

    //     int son=5;
    //       masala 10
    //     for (int i = 1; i <= son; i++)
    //     {
    //           for (int j = son; j >=1; j--)
    //           {
    //               if(j>i)
    //              printf(" ");
    //           }

    //           for (int k = 1; k <=i; k++)
    //           {
    //               printf("%d",k);
    //           }

    //           for (int f = son; f >= 1; f--)
    //           {
    //               if (f <= i-1)
    //                   printf("%d", f);
    //           }

    //           printf("\n");
    //      }

    // for (int i = 1; i < son; i++)
    // {
    //    for (int f =son; f >=1; f--)
    //    {
    //       if(f<=i)
    //       printf("%d",f);
    //    }
    //    printf("\n");
    //  }
    
    



















// masala 9
// void nech_xona(int son)
// {
//     int sanoq=1;
//     for (int i = 0; son / 10 > 0; sanoq++,son/=10)
//     { }
    
//     printf("%d",sanoq);
// }


// int main(){
//     int son;
//     scanf("%d",&son);

//     nech_xona(son);


    //masala 8
    // bool tubmi(int son)
    // {
    //     int sanoq=0;
    //     for (int i = 1; i <=son; i++)
    //     {
    //         if (son % i==0)
    //          sanoq++;
    //     }

    //     return sanoq==2 ? true : false ;

    // }
    // int main(){
    //     int son;
    //     scanf("%d",&son);

    //  printf( tubmi(son) ? "true" : "false");

    //masala 7
    // int yana_rekursiya(int son)
    // {
    //     if(son==1)
    //         return 1;
    //     return son + yana_rekursiya(son-1);
    // }

    // int main(){
    //     int son=5;

    //     printf("%d",yana_rekursiya(son));

    //masala 6
    // void _pow(int a,int b)
    // {
    //     int yigindi=1;
    //      for (size_t i = 0; i < b; i++)
    //      {
    //        yigindi*=a;
    //      }
    //      printf("%d",yigindi);
    // }

    // int main(){

    //     int a,b;
    //     scanf("%d %d",&a,&b);
    //     _pow(a,b);

    // masala 5
    // G'IRT XATO
    // INPUT 1,2 OUTPUT 2,1 BOLISHI KERAK
    // int alish(int *Pson)
    // {
    //     int a;
    //     a=*Pson%10 * 10 +*Pson/10;
    //     return a;
    // }

    // int main(){
    //     int son=12;
    //     printf("%d",alish(&son));

    // masala 4
    // bool is_raqam(char belgi)
    // {
    //     if (belgi =='0'||belgi=='1'||belgi=='2'||belgi=='3'||belgi=='4'||belgi=='5'||belgi=='6'||belgi=='7'||belgi=='8'||belgi=='9')
    //         return true;
    //     else
    //         return false;
    // }
    // int main(){
    //     char belgi;

    //     scanf("%c",&belgi);
    //     printf(is_raqam(belgi) ? "true" : "false");

    //masala 3
    // bool manfiy(int son)
    // {
    //     return son<0 ? true : false;
    // }

    // int main(){

    // int son;
    // scanf("%d",&son);
    // printf( manfiy(son) ? "true" : "false");

    // masala 2
    // bool juftmi(int son)
    // {
    //     return son%2==0 ? true : false;
    // }

    // int main(){

    // int son;
    // scanf("%d",&son);
    // printf( juftmi(son) ? "true" : "false");

    //masala 1
    // int array[10]={1,2,3,4,5,6,7,8,9,10};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",array[i]);
    // }

    return 0;
}
