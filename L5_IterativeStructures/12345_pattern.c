/*  WAP to print the following pattern
     1
    12
   123
  1234
 12345 */

#include <stdio.h>
#include <conio.h>

int main()
{
     int i, j, k;
     
     for(i=1; i<=5; i++)
     {
              for(k=5-i; k>=0; k--)
              {
                       printf(" ");
              }
              
              for(j=1; j<=i; j++)
              {
                       printf("%d", j);
              }
              
              printf("\n");
     }
     
     getch();     
}
