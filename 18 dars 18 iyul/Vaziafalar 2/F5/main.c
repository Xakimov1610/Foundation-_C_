#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sozlar[30];
    int sanoq=0;
    gets(sozlar);
   
        for (int k = 0;k< 30; k++)
        {
            if (sozlar[k] >=48 && sozlar[k]<=57)
                sanoq++;
        }
        
      // EZVORAAAAAAAAAAAAAAAAAAAAAAAAAA
   
    
printf("%d\n",sanoq);

    return 0;
}

