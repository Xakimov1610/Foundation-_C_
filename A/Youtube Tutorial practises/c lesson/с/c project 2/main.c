#include <stdio.h>
#include <stdlib.h>
int main () {

printf("hello");

return 0;}

    /*1-lesson
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___| \n"); */

    /*VARIABLES is a contiainer that we can store different types of information
    CHAR-IS A VARIABLE THAT STORE THE INFORMATIN
    INT-IS AN INTEGEGAR THAT STORES NUMBERS
    %s-IS STRING-text,information
    %d-integar number


    char ism[]="bob";
    int yosh=23;

    printf("uni ismi %s\n" ,ism);
    printf("yoshi %d da\n" , yosh);
    printf("asli ismi %s mas\n" , ism);
    printf("yoshiyam %d mas\n" , yosh);

      **  char ism[]= "bob";
    int yosh=21;
    printf("uni ismi %s \n yoshu %d da\n ismi asli %s \n yoshui asli %d\n" , ism , yosh ,ism ,yosh); **
    */
    /* DATA TYPES
    NUMBER
    1 INTEGAR"int"-Whole number like 1, 2 ,3 .. butun son for example; int yosh=20;
    2 DOUBLE VS FLOAT "double vs float" - decimal numbers like 1.1 2.2 for example: double baho = 2.5;
    3 CHARACTER "char"-store single character ,we should use 'SINGLE QUOTEION MARK FOR THAT', FOR EXAMPPLE: char grade = 'A';
    4 CHARACTER "char ... []"-can store more than one information for example: char phase[] = "somehing bla bla"; */

    /* PRINTF -function,it perform specific taskk,function
    FORMAT SPICIFIER
    %d -INTEGAR,whole number ,butun son
    %s -text

    %f- used to specify decimal numbers like 100.1 , 23.5 so on
    printf("my grade is %f",4.0);
    %c - used to specify SINGLE CHARACTER ,for example
     char my = 'a';
    printf("my grade is %c " , my);





    */

/*WORKING WITH NUMBERS
printf("%f" , 10.0 / 3 );
POW "pow (2 , 3)" - is 2^3 which is 8
SQRT-squaroot-"sqrt (2); for example ,printf("%f" , sqrt(81) ); SQRT BERILGAN SON QAYSI SONNING KVADRATI EKANINI ANIQLAB BERADI!!!
CEIL-ceiling -printf("%f" , ceil(35.232));-UZIDAN KEYIBGI ENG KATTA SONNI KORSATADI
FLOOR -floor-berilgan sondan oldingi kichik sonni korsatadi , printf("%f " , floor(33.7)); RESULT -36

AMALLAR BILAN ISHLASH
printf("%f" ,4.5+ 2 *2 -2 );

SEARCH THE INTENET - C MATH FUNCTIONS!!!
*/

// COMMENT SIGN " // FOR 1 LINE - /* FOR ALL THR TEXT*/

/* CONSTANTS -WATCH AGAIN THE LESSON*/

/* GETTING USER INPUT
1 WITH INT-
int yosh;
printf("yoshingiz: ");
scanf("%d", & yosh);
printf("sizning yoshingiz  %d da ",yosh );
2 DOUBLE ORQALI-
double baho;
printf("bahoyiniz nechi?");
scanf("%lf", & baho);
printf("sizning bahoyingiz %f" , baho);
NOTE:SCANF da"%lf" bilan yozamiz input olish uchun lekin PRNTF da "%f"ni kifoya

3 CHAR ORQALI-BITTA HARF KIRITISH MUMKIN XOLOS
char baho;
printf("bahoyingiz nechi:");
scanf("%c", &baho);
printf("sizning bahoyingiz %c", baho);

4 CHAR ORQALI TEXT- BUNDA SCANF NI ORNIGA "fgets ishlatiladi va ishlatilish jihati boshqacharoq ,e'tiobr bering yaxshiroq!!!

version 1
char name[2];
printf("your name is:");
fgets(name,10,stdin);-here stdin is STANDART INPUT
printf("your name is %s \nwsdww",name);
VERSION 2
char ism[20];
printf("ismingiz:");
fgets(ism,20,stdin);
printf("Assalomu alaykum %s", ism);
*/
/* BUILDING A CALCULATOR
BUTUN SONLAR USTIDA AMALLAR - %d -YORDAMIDA
MISOL:
printf(" matematik amallar bajarish\n");
int son1;
int son2;
printf("birinchi sonni kiriting:");
scanf("%d", &son1);
printf("ikkinchi sonni kiriting:");
scanf("%d",&son2);
printf("Javob:%d", son1 *son2);

KASRLAR USTIDA AMALLAR-%f-YORDAMIDA
MISOL:
printf(" matematik amallar bajarish\n");
double son1;
double son2;
printf("sonni kiriting");
scanf("%lf",&son1);
printf("ikkinchi son:");
scanf("%lf",&son2);
printf("javob:%f", son1+son2);

MISOL:
double son1;
double son2;

printf("son ");
scanf("%lf", &son1);
printf("son2 ");
scanf("%lf",&son2);
printf("javib:%f", son1-son2);

*/
/*
MAKING A MAD LIBS GAME

char rang[20];
char narsa[20];
char artist[20];

printf("Yoqtirgan rangingiz:");
scanf("%s",rang);
printf("biror bir narsa nomi:");
scanf("%s",narsa);
printf("artist ismi:");
scanf("%s",artist);

printf("yoqtirgan rangingiz %s \n",rang);
printf("eng ko'p ishlatadigan narsangiz %s ekan\n",narsa);
printf("yoqtirgan artistingiz %s\n",artist);

*/
/*
ARRAYS

int lucky[]={1,2,3,4,5,7,1,12,12,};
lucky[1]=12;
printf("%d",lucky[1]);

int lucky[10];
lucky[1]=10;
printf("%d",lucky[2]);
*/
/* FUNCTION
sayHi("mike",11 );

sayHi("tom",12);
sayHi("bob",13);


    return 0;
}
void sayHi(char name[] ,int age[]) {
    printf("hello %s,you are %d years old\n" , name,age);

}

2-mashq
say("bob",12);
say("tob",111);
say("jonny",121);


    return 0;
}
void say (char name[],int age[]) {
printf("hello %s , you are %d yaers old \n",name,age);

}

3-masq

salom("Mustafo",7);
salom("Husniddin",9);
salom("Bilolxon",0);
    return 0;
}
void salom(char ism[],int yosh[]){
printf("Assalomu alaykum %s,siz %d yoshdasiz\n",ism,yosh);
}



*/
/* RETURN FUNCTION
1-mashq
double kvadrat (double son){
return son*son;}





int main()
{
   printf("javob:%f",kvadrat(5.5));

return 0;}

2-mashq

int cube (int son)
{
   int result=son*son*son;
   return result;
}




int main()
{
 printf("javob:%d",cube(5));

return 0;}

3-mashq


int cube (int son)
{

   return son*son*son;
}




int main()
{
 printf("javob:%d",cube(5));

return 0;}


double cube (double son);
int main()
{
 printf("javob:%f",cube(5));

return 0;}


double cube (double son)
{

   return son*son*son;
}



*/
/*
IF STATEMENT

1-MASHQ


int max(int son1,int son2){
int result;
if(son1>son2){
    result=son1;
}
else{result=son2;}
return result;
}
int main()
{

printf("%d",max(12,11));

return 0;}

2-MASHQ

int max(int son1,int son2,int son3){
int result;
if(son1>=son2 && son1>=son3){
    result=son1;
}
else if (son2>=son1 && son2>=son3 ){result=son2;}
else {result=son3;}
return result;
}
int main()
{

if (1!=2){printf("true");
}
else {printf("false");}

return 0;}

3-MASHQ

int max(int son1,int son2,int son3){
int result;
if(son1>=son2 && son1>=son3){
    result=son1;
}
else if (son2>=son1 && son2>=son3 ){result=son2;}
else {result=son3;}
return result;
}
int main()
{

if (!(3>2)){printf("true"); --- if (!(3>2)) IF DAN KEYIN QAVS OCHIB UNDOV BELGISINI QOYSAK! U NATIJANI TESKARISINI CHIQARIB BERADI
    MISOL UCHUN 2>1 BOLSA BUNI NOTOGRI KORSATADI,YOKI 1>2 DESA BUNI TO'G'RI DEB KORSATADI. E'TIBOR BERING!!!.
}
else {printf("false");}

return 0;}



*/
/* AMALIYOT UCHUN MASHQ

char ism[20];
int yosh;
double baho;

printf("ismiz:");
scanf("%s",&ism);
printf("yoshiz:");
scanf("%d",&yosh);
printf("baho:");
scanf("%lf",&baho);


printf("sizning ismingiz %s\n",ism);
printf("sizning yoshingiz %dda\n",yosh);
printf("bahoyingiz %.1f",baho);

FLOAT ORQALI BAHOSINI BILISH

char ism[20];
int yosh;
float baho;

printf("ismiz:");
scanf("%s",&ism);
printf("yoshiz:");
scanf("%d",&yosh);
printf("baho:");
scanf("%f",&baho);


printf("sizning ismingiz %s\n",ism);
printf("sizning yoshingiz %dda\n",yosh);
printf("bahoyingiz %.1f",baho);
*/
/* BUILDING A BETTER CALCULATER

 printf("hello there");



double num1;
double num2;
char oper;
printf("enter the number:");
scanf("%lf",&num1);
printf("enter the operateor");
scanf(" %c",&oper);  IN THIS LINE BE CAREFULL AFTER scanf(HERE SHOULDBE BE THE SPACE ___THEN %c ,,for example scanf(_%c...)'' PAY ATTENTION TO THIS PART TOOOOOOO
printf("enter the second number");
scanf("%lf",&num2);

   if (oper == '+') { printf("%f",num1+num2);}
  else if (oper == '-') {printf("%f",num1-num2);}
    else if (oper == '*'){ printf("%f",num1*num2); }
    else if (oper== '/'){printf("%f",num1/num2);}
else {printf("invalid operator");}

!!!PAY ATTENTION

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

  if       (op == '+') { printf("%0.0f",num1+num2);}  !!! WHEN YOU PUT NUMBER.NUMBER YOU CAN REDUCE
  else if (op == '-') {printf("%0.0f",num1-num2);}     !!! THE DIGIT NUMBERS AFTER . NUMBER
  else if (op == '*'){ printf("%0.1f",num1*num2); }    !!! % BLAN F NI ORTASIGA son.son QOYSAK
  else if (op== '/'){printf("%0.0f",num1/num2);}       !!! BUTUN SONDAN KEYINGI SONLARNI QISQARTIRADI!!!
else {printf("invalid operator");}                    !!! PAY ATTENTION!!!




*/










