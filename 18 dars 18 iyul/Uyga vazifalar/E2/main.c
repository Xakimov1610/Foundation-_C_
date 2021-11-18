#include <stdlib.h>
#include <stdio.h>
int main()
{

int arr[7]={5, 4, -4, 15, 0, -22, 19},
arr2[10]={6, 2, 13, 5, -2, -1, 4, 10, -7, 0};
printf("7 ta son:");
for(int i=0; i <7;i++)
{
    scanf("%d",&arr[i]);
}
printf("10 ta son:");
for (int i = 0; i < 10; i++)
{
    scanf("%d", &arr2[i]);
}
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (arr[i] == arr2[j])
        printf("%d\n",arr[i]);
    }
    
}

    return 0;
}