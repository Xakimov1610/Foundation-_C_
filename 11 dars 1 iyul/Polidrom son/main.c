#include <stdio.h>

void main(){
    int num,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         printf("%d is a palindrome number.\n",t);
    else
         printf("%d is not a palindrome number.\n",t);

         return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("3 ta son kiriting:");
   scanf("%d %d %d",&a,&b,&c);


   if (a%10 ==a/100)
   {
       printf("bu son polidrom");
   }
    else if (b%10==b/100)
        printf("poligrom");
    else if (c%10==c/100)
        printf("poligrom");
    else {printf("deng!!!");}

    return 0;
}
*/

/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,r,s=0;
    printf("\n Enter The Number:");
    scanf("%d",&n);


    //LOOP TO FIND REVERSE OF A NUMBER
    for(i=n;i>0; ) //i=1441 1441>0
    {
         //1441
        r=i%10;  // r = 1441%10=1
        s=s*10+r;  // s=
        i=i/10;
    }

    //CHECKING IF THE NUMBER ENTERED AND THE REVERSE NUMBER IS EQUAL OR NOT
    if(s==n)
    {
        printf("\n %d is a Palindrome Number",n);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",n);
    }
    getch();
}
*/






