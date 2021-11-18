#include <stdio.h>
#include <stdlib.h>
int n;

int orta_qiymat(int a[n])
{
    int yigindi=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        yigindi+=a[i];
       
    }
    return yigindi / n;
}
int main()
{
    printf("nechta element kiritasiz:");
    scanf("%d", &n);
    int array[n];
   

    printf("%d", orta_qiymat(array));

    return 0;
}