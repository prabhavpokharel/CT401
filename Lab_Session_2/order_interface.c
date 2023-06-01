/*wap for departmental store to display list of 3 items*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int choice, q;
    
    printf("\t\tDEPARTMENTAL STORE");
    printf("\n\nS.N.\t\tItem\t\tPrice(Rs)");
    printf("\n1\t\tBread\t\t30\n2\t\tJam\t\t90\n3\t\tButter\t\t120");
    
    printf("\n\nPlease enter your choice (1, 2 or 3): ");
    scanf("%d", &choice);
    printf("\nEnter Quantities: ");
    scanf("%d", &q);
    
    if(q<0)
    {
           printf("\nINVALID INPUT");
    }
    else
    {
        switch(choice)
        {
                  case 1:
                       printf("\nThe total cost of your order is Rs %d", q * 30);
                       break;
                  
                  case 2:
                       printf("\nThe total cost of your order is Rs %d", q * 90);
                       break;
                       
                  case 3:
                       printf("\nThe total cost of your order is Rs %d", q * 120);
                       break;
                       
                  default:
                          printf("\n\nINVALID INPUT");
        }
    }
    
    getch();
 }
 
