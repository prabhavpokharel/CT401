/* WAP to determine whether a given year is leap year or not
NOTE: century years divisible by 400, however are leap year*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;
    
    printf("Enter any year: ");
    scanf("%d", &year);
    
    if(year % 100 == 0)
    {
            if(year % 400 == 0)
            {
                    printf("%d is a leap year", year);
            }
            else
            {
                    printf("%d is not a leap year", year);
            }
    }
    else if(year % 4 == 0)
    {
         printf("%d is a leap year", year);
    }
    else
    {
         printf("%d is not a leap year", year);
    }
    
    getch();
 }
 
