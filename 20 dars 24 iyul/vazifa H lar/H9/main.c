#include <stdlib.h>
#include <stdio.h>
int user;
int yigindi(int son[user])
{
    int natija=0;
    for (int i=0; i < user; i++)
    {
        scanf("%d",&son[i]);
        natija+=son[i];

    }
    return natija;
}

int main()
{
    printf("nechta element kiritasiz:");
    scanf("%d",&user);
    int array[user];

    printf("%d",yigindi(array) );



    return 0;
}
