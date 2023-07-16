/* WAP to print the following pattern
programming
rogrammin
ogrammi
gramm
ram
a */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, j;
    char name[] = "programming";
    
    for(i=0; i<6; i++)
    {
              for(j=i; j<=strlen(name)-i-1; j++)
              {
                        printf("%c", name[j]);
             }
             printf("\n");
    }
    
    
    getch();    
}
