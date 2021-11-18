#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[9]={1,2,3,4,5,6,7,8,9};
    int n;
    scanf("%d",&n);

    for (int i=0; i< 9 ; i++)
    {
        for (int k = i+1; k < 9; k++)
        {
            if (array[i]==array[k])
            continue;
            if (array[i]+array[k]==n)
                  printf("%d,%d\n",array[i],array[k]);
  
        }
       
        
     
    }
 
    return 0;
}