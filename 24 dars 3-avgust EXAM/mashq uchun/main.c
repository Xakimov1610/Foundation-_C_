/*#include <stdio.h>

int main ()
{
    // qara oshna eng osonidan boshlemiz

    // endi user nimadir kiritsa uni ekranga chiqaramiz

    char sozlar[50]; // bu userdan olgan sozimizni uzida saqlovchi bir quti desak ham boladi
                        // uzida so'z saqlaydi


    gets(sozlar);// bu esa shu sozni userdan oladi ,hozi qarab tursen 
                        // ong tarafda korinadi



        

    printf("%s",sozlar);// bu esa shu olingan sozlani ekranga chiqaradi

    return 0;
}*/

#include <stdio.h>
int main(){
  
  int chegara;
   // system("cls");
    scanf("%d", &chegara);
    char harf = 'A';

    for (int i = 1; i <= chegara; i++)
    {
        for (int j = 1; j < 2 * chegara; j++)
        {
            if (i + j <= chegara + 1 || j - i >= chegara - 1)
            {
                if (j <= chegara)
                {
                    printf(" %c", (harf++));
                }

                else
                {
                    if (i == 1)
                    {
                        printf(" %c", (--harf) - 1);
                    }
                    else
                        printf(" %c", --harf);
                }
            }
            else
                printf(j == chegara ? "  " : "  ");
        }
        printf("\n");
        harf = 'A';
    }
        return 0;
    }