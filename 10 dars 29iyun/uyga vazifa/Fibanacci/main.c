#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number to find the its fibanacci:\n");
  scanf("%d", &n);

  printf("%dth fibanacci:\n", n);

 for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
  }
  printf("%d\n",next);
  return 0;
}

































/*
int main12()
{
    int n,first=0,second=1,next,c;

    printf("enter the num to find the fibanacci: ");
    scanf("%d",&n);

    printf("fibanaaccii %d\n",n);
    for (c=0;c<n;c++)
    {
        if(c<=1)
           next=c;

        else {
            next=first+second;
            first=second;
            second=next;
        }
         printf("%d\n",next);
    }
    return 0;
}

int main_11()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n",next);
  }

  return 0;
}
*/
