/* WAP to print the following pattern
    1
   121
  12321
 1234321
123454321 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k, l;
    
    for(i=1; i<=5; i++)
    {
             for(j=5-i; j>=0; j--)
             {
                        printf(" ");
             }
             
             for(k=1; k<=i; k++)
             {
                        printf("%d", k);
             }
             
             for(l=i-1; l>0; l--)
             {
                        printf("%d", l);    
             }
             
             printf("\n");
    }
    
    
    getch();    
}
