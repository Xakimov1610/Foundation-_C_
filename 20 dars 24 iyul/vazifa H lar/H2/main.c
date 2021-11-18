#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*bool is_equal(char a[],char b[])
{
  int sanoq=0;

   for (int i = 0; i < 10; i++)
    {
       if (a[i]!=b[i])
            sanoq++;
           
    }
    if (sanoq==0){
        return true;
    }
      
        else{
            return false;
        }
        */
    
/*
      for (int i=0; sizeof(a)==sizeof(b);i++)
      {
        if (a[i]!=b[j])
            sanoq++;

      }
      if (sanoq!=0)
      return true;
      else 
       return  false;
} */
bool is_equal(char a[],char b[])
{

    int sanoq = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
            sanoq++;
    }
    printf ( sanoq==0 ? true : false);
    // if (sanoq == 0)
    // {
    //     return true;
    // }

    // else
    // {
    //     return false;
    // }
}
int main()
{
    
    char a[10],b[10];
    scanf("%s %s",&a,&b);

   

    printf( is_equal(a,b) ? "true":"false" );

    return 0;
}


































    /*is_equal() nomli function tuzing, 
bu function 2 ta stringni tengligini
 tekshirsin.Agar string lar teng bo'lsa, 
 function true qaytarsin, aks holda false qayarsin.

is_equal("Chelsea", "Barca")
Output:    False

is_equal("Chelsea", "Chelsea")
Output:    True

is_equal("Chelsea", "Chelsee")
Output:    False */