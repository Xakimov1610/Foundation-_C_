/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_equal(char a[10],char b[10])
{
  int sanoq=0;
  int nn=sizeof(a[1]);


   for (int i = 0; i < nn; i++)
    {
       if (a[i]==b[i])
            sanoq++;    
    }
    if (sanoq==nn)
        return true;
        else 
        return false;
} 
int main()
{

    char a[10], b[10];
    scanf("%s %s", &a, &b);

    int sanoq = 0;

    

    printf( is_equal(a,b) ? "true":"false" );

    return 0;
}
*/
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


#include <stdio.h>
#include <stdlib.h>

    char is_Equal(char user[])
{
   // char is_equal[8] = "Chelsea";
    int nn = sizeof(user2[]);
    int sanoq = 0;
    for (int i = 0; i < nn; i++)
    {
        if (is_equal[i] == user[i])
        {
            sanoq++;
        }
    }
    if (sanoq == nn)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} int main()
{

    char user[10],user2[10];

    scanf("%s %s", &user,&user2);

    if (is_Equal(user) == 1)
        printf("True");
    else
        printf("False");

    return 0;
}