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



/*#include <stdio.h>

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

}*/


#include <stdlib.h>
int main(){

    int a,b,c=0;
   /* if (a>b){
        c=a;
        a=b;
    }
*/

printf("2 son kiriting:");
scanf("%d %d",&a,&b);

if (a<b){
    for ( ; a<=b; a++)
        printf("%d\n",a);
}
else if (a>b)
{
    for ( ; b<=a; b++)
        printf("%d\n",b);
}

else { printf("deng!"); }


















return 0;
}
