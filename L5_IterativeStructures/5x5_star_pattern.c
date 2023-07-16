/*  WAP to print the following pattern
*
**
***
****
*****  */

#include <stdio.h>
#include <conio.h>

void main()
{
     int i, j;
     
     for(i=0; i<5; i++)
     {
              for(j=0; j<=i; j++)
              {
                       printf("*");
              }
              printf("\n");
     }
     
     getch();     
}
