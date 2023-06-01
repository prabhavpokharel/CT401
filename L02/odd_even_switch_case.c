/*wap to check whether the given number is odd or even use switch case*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    switch(num % 2)
    {
               case 0:
                    printf("The given number is even."); 
                    break;
                    
               case 1:
                    printf("The given number is odd.");   
                    break;   
                    
               default:
                    printf("Invalid Input");   
                    break;    
    }
    
    getch();
 }
 
