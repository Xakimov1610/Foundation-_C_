#include <stdlib.h>
#include <stdio.h>

void funk(int *arr, int uzun)
{
  for (int i = 0; i < uzun; i++)
  {
    if (i % 2 == 0)
      printf("%d\n", arr[i] * 2);
    else
      printf("%d\n", arr[i] - 1);
  }
}

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};

  int uzunlik = sizeof(arr) / sizeof(arr[0]);
  funk(arr, uzunlik);


  // int i=0;

  // void juft_toq(int *array)
  // {

  //         if (*array %2 ==0)
  //           *array *= 2;
  //          else
  //              *array-=5;
  //           printf("%d\n",*array);
  // }
  // int main ()
  // {

  //     int array[5]={1,2,3,4,5};
  //         int *arrP[5]=&array[5];
  //      for (int i = 0; i < 5; i++)
  //      {
  //        juft_toq(&array[i]);
  //      }

  return 0;
}