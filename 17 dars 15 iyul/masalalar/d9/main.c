
#include <stdio.h>
#include <stdlib.h>


int main ()
{
   
int arr[10]={ };
//int nn=sizeof (arr) / sizeof(int);
int arr2 []={};
for (int i = 0; i < 10; i++)
{
    scanf("%d",&arr[i]);
}

    for (int i = 0; i < 10; i++)
    {
      
        for (int j = 0; j< i; j++)
        {
           if (arr[i]==arr[j])
           {
               arr2[i] = arr[i];
               printf("%d\n", arr2[i]);
           }
                 
        }
    }

    return 0;
}

