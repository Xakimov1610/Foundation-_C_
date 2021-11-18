
#include <stdio.h>

void sort(int *son,int uzun)
{
   for (int i = 0,sort; i < uzun; i++)
   {
      for (int k = 0; k < uzun; k++)
      {
         if (son[i]<son[k])
         {
             sort=son[k];
             son[k]=son[i];
             son[i]=sort;
         }
         
      }
   
      }
   
   
}
int main ()
{

    int arr[5]={};
    int uzun=sizeof(arr)/sizeof(arr[0]);
   
    for (int i = 0; i < uzun; i++)
    {
        scanf("%d",&arr[i]);
    }
  
    sort(arr,uzun);

    for (int i = 0; i < uzun; i++)
    {
       printf("%d",arr[i]);
    }
    


    return 0;
}


