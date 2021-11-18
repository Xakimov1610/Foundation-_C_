#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age =23;
  float gpa=4.0;
  char grade ='A';
  printf("age:%p\ngpa:%p\ngrade:%p\n",&age,&gpa,&grade);
    return 0;
}
