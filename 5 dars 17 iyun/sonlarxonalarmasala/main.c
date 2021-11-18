/*#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;

 printf("5 xonalik son kiriting:");
 scanf("%d",&a);

 printf("Birlar xonasidagi son: %d\n",a%10);

 printf("O'nlar xonasidagi son: %d\n",a/10 %10);

 printf("Yuzlar xonasidagi son: %d\n",a/ 100 %10);

 printf("Minglar xonasidagi son: %d\n",a/1000%10);

 printf("O'n minglar xonasidagi son:%d\n",a/10000%10);
    return 0;
}*/



#include <stdio.h>
#include <stdlib.h>


int main () {

    /*int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);

	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));

	printf("H:M:S - %d:%d:%d\n",h,m,s); */

	int sec, hh, mm, ss;

	 printf("Enter time in seconds: ");
	 scanf("%d", &sec);
	 hh = sec/3600;
	 mm = (sec - hh*3600)/60;
	 ss = sec - hh*3600 - mm*60;
	 printf("%d seconds = %d hours : %d minutes : %d seconds", sec, hh, ss, mm);
	 getch();





return 0;
}
