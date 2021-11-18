#include <stdio.h>
#include <stdlib.h>
int main()
{

int son[10]= {2, 15, 19, 34, 26, 88, 27, 55, 20, 11};

for (int i = 0; i < 10; i++)
{
    if (son[i]%2==1)
    printf("%d,",son[i]);
}
for (int i = 0; i < 10; i++)
{
    if (son[i] % 2 == 0)
        printf("%d,", son[i]);
}

return 0 ;
}

// Array berilgan : {2, 15, 19, 34, 26, 88, 27, 55, 20, 11}

//  Arrayning toq elementlarini shu arrayning boshiga,
//  juft elementlarini esa oxiriga joylashtirib qo 'ying. (O' sish tartibida bo'lishi shart emas)

//  Output : (15, 19, 27, 55, 11, 2, 34, 26, 88, 20)