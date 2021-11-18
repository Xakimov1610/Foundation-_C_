#include <stdio.h>
#include <stdlib.h>

int main()
{
  // BIRINCHI KORINISHI
/*
  int sec, hh, mm, ss;

	 printf("Enter time in seconds: ");
	 scanf("%d", &sec);
	 hh = sec/3600;
	 mm = (sec - hh*3600)/60;
	 ss = sec - hh*3600 - mm*60;
	 printf("%d seconds = %d hours : %d minutes : %d seconds", sec, hh, ss, mm);
return 0;}

*/
     // IKKINCHISI
    /* int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);

	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));

	printf("H:M:S - %d:%d:%d\n",h,m,s);
	*/


// BERILGAN KUNNI OY YIL KUNGA AYLANTIRISH
 /* int number_of_days, years, months, days;

    /* Reading number of days from user */
   // printf("Enter number of days: ");
  //  scanf("%d", &number_of_days);

    /* Calculating years */
 //   years = number_of_days / 365;

    // Calculating months
 //   months = (number_of_days - years *365) / 30;

    // Calculating days
  //  days = (number_of_days - years * 365 - months*30);

    // Displaying results
 //   printf("Years = %d", years);
  //  printf("\nMonths = %d", months);
  //  printf("\nDays = %d", days);
   //         return 0;}




// BERILGAN KUNNI SOATGA,MINUTGA SEKUNDGA AYLANTIRISH

int kun,soat,minut,sekund;


printf("KUNNI KIRITING:");
scanf("%d",&kun);


soat=kun*24;
minut=kun*24*60;
sekund=kun*24*60*60;

printf("%d KUNDA\n%d soat\n%d minut\n%d sekund bor\n\n\n\n",kun,soat,minut,sekund);
return 0;
}

