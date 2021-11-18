#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("HEY IT IS A CALCULATOR,USE IT AND ENJOT!\n");

double num1;
double num2;
char op;
printf("enter the number:");
scanf("%lf",&num1);
printf("enter the operateor:");
scanf(" %c",&op);
printf("enter the second number:");
scanf("%lf",&num2);

  if       (op == '+') { printf("%0.0f",num1+num2);}
  else if (op == '-') {printf("%0.0f",num1-num2);}
  else if (op == '*'){ printf("%0.1f",num1*num2); }
  else if (op== '/'){printf("%0.0f",num1/num2);}
else {printf("invalid operator");}

    return 0;
}
