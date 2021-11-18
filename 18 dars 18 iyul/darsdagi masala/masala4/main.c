#include<stdio.h>
#include<stdlib.h>
int main(){
    
    char name [20]="Komiljon Nosirov";
    int sanoq=0;

    for (int i=0; name[i]!='\0'; i++)
    {
 
        printf("%c",name[i]);
        sanoq++;
    }
    
    printf("\n%d ta belgi bor",sanoq);
    
    
    
    
    
    
    
    
    
    return 0;
}